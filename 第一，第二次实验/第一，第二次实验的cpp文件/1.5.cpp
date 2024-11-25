#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "请输入华氏温度 ：";
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "这等于" << fixed << setprecision(2) << C << "°C" << endl;
	return 0;
}
