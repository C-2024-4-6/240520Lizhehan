#include <iostream>
using namespace std;
const double pi = 3.14;
int main()
{
	double r, h,V;
	cout << "������һ��Բ׶��ĵ���뾶 ��";
	cin >> r;
	cout << "������������ĸ� �� ";
	cin >> h;
	V =   (pi * h * r * r)/3;
	cout << "���Բ׶��ĸ��� ��" << V << '\n';
	return 0;
}