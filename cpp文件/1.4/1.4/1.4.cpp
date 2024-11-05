#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	//cout << "output in unsigned int 1 type:"<< testUnint << endl;//<<oct;
	//	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	//cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:    因为超出short表示数的上限。
	//cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	//cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	//cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	//cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	//system("pause");
	//return 0;
	cout << oct;
	cout << "out put in oct usigned int type:" << testUnint << endl;


}

