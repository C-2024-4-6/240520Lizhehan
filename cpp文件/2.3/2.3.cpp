#include <iostream>
using namespace std;
int main()
{
	double a,b,c;
	cout << "�����������ε����� ��";
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a)
		{
			cout <<"�����ܳ���" << (a + b + c);
			if (a == b || b == c || a == c)
				cout << "���ǵ���������" << endl;
			else cout << "�����ǵ���������"<<endl;
		}
		else cout << "�������������ε�����" << endl;
		return 0;
}
