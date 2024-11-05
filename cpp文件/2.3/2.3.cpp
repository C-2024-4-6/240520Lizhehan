#include <iostream>
using namespace std;
int main()
{
	double a,b,c;
	cout << "请输入三角形的三边 ：";
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a)
		{
			cout <<"它的周长是" << (a + b + c);
			if (a == b || b == c || a == c)
				cout << "它是等腰三角形" << endl;
			else cout << "它不是等腰三角形"<<endl;
		}
		else cout << "它不满足三角形的条件" << endl;
		return 0;
}
