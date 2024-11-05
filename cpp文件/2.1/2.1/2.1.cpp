#include <iostream>
using namespace std;
int main()
{
	char ch,ch_next;
	cout << "请输入一个小写字母" << endl;
	cin >> ch;

	if ( ch>='a'&& ch<='z')
	{
		ch = ch - 'a' + 'A';
		cout << "它的大写字母为 ：" << ch;
	}
	else
	{
		ch_next = ch + 1;
		cout << "这个字母下一个字母的ASCII值是 ：" << int(ch_next);
	}
	
	
	return 0;
}