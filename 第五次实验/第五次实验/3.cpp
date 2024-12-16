#include <iostream>
using namespace std;
class Cuboid
{
private:
	double length;
	double width;
	double height;
public:
	void SetV(double a, double b, double c)
	{
		length = a;
		width = b;
		height = c;
	}
	double ShowV()
	{
		return length * width * height;
	}
};
int main()
{
	Cuboid C[3];
	for (int i = 0; i < 3; i++)
	{
		double a, b, c;
		cin >> a >> b >> c;
		C[i].SetV(a, b, c);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Ìå»ýÊÇ £º" << C[i].ShowV();
	}
		
}