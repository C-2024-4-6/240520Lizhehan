#include <iostream>
using namespace std;
void sortarray(int* p,int size)
{
		bool changed = true;
		do
		{
			changed = false;
			for (int j = 0; j < size - 1; j++)
				if (p[j] > p[j + 1])
				{
					double t = p[j];
					p[j] = p[j + 1];
					p[j + 1] = t;
					changed = true;
				}
		} while (changed);
}


int main()
{
	int size;
	cout << "输入元素个数";
	cin >> size;
	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	cout << "对数组进行排序" << endl;
	sortarray(array, size);
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << '\t';
	}
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "的地址是" << array + i << endl;
	}
	delete[]array;
	return 0;

}