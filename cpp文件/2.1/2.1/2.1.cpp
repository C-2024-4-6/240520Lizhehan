#include <iostream>
using namespace std;
int main()
{
	char ch,ch_next;
	cout << "������һ��Сд��ĸ" << endl;
	cin >> ch;

	if ( ch>='a'&& ch<='z')
	{
		ch = ch - 'a' + 'A';
		cout << "���Ĵ�д��ĸΪ ��" << ch;
	}
	else
	{
		ch_next = ch + 1;
		cout << "�����ĸ��һ����ĸ��ASCIIֵ�� ��" << int(ch_next);
	}
	
	
	return 0;
}