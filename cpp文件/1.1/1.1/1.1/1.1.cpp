//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = k + 1;   /*错误：未定义k*/
//	cout << i++ << endl;
//	int i = 1;
//	cout << i++ << endl;
//	cout << "Welcome to C++" << endl;
//	return 0;
//}
//以下为修正
#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	int i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
