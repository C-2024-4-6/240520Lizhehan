#include <iostream>
using namespace std;
class Point
{
private:
	double x, y;
public:
	Point() = default;
	Point(double x,double y):x(x),y(y){}
	void set_point(double i, double j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "修改后，x为" << x << "，y为" << y << endl;
	}
};
int main()
{
	Point p1(60, 80);
	p1.set_point(10, 20);
	p1.display();
	return 0;
}