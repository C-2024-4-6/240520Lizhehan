#include <iostream>
#include <cmath>
using namespace std;
bool is_valid(double side1,double side2,double side3)
{
	if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
	{
		return 1;
	}
	else
		return 0;
}
double is_area(double side1, double side2, double side3)
{
	double S, s;
	is_valid(side1, side2, side3);
	s = (side1 + side2 + side3) / 3;
	S = sqrt((s*(s - side1) * (s - side2) * (s - side3)));
	return S;
}


