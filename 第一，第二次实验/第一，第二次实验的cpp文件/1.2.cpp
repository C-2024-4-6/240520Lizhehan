#include <iostream>
using namespace std;
const double pi = 3.14;
int main()
{
	double r, h,V;
	cout << "请输入一个圆锥体的底面半径 ：";
	cin >> r;
	cout << "请继续输入它的高 ： ";
	cin >> h;
	V =   (pi * h * r * r)/3;
	cout << "这个圆锥体的高是 ：" << V << '\n';
	return 0;
}