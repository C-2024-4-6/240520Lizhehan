#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	return (b==0) ?a : gcd(b,a % b);
}
void way(int a, int b, int& m, int& n)
{
	m = gcd(a, b);
	n = a * b / m;
	
}



int main()
{
	int a, b,m,n;
	cin >> a >> b;
	way(a, b, m, n);
	cout << "���Լ����" << gcd(a, b) << endl;
	cout << "��С��������" << n << endl;


	return 0;
}