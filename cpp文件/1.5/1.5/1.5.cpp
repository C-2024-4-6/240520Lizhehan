#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "�����뻪���¶� ��";
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "�����" << fixed << setprecision(2) << C << "��C" << endl;
	return 0;
}
