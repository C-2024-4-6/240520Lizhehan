#include <iostream>
using namespace std;
void bubble(double* list, int listsize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0;j < listsize-1;j++)
			if (list[j] > list[j + 1])
			{
				double t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				changed = true;
			}
	} while (changed);

}
int main()
{
	int listsize;
	double list[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	listsize = sizeof(list) / sizeof(double);
	bubble(list, listsize);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << '\t';
	}




	return 0;
}