#include <iostream>
#include <cstring>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; i < strlen(s); i++)
	{
		if (isalpha(s[i]))
		{
			char want = tolower(s[i]);
			counts[(want)-'a']++;
		}
	}
	
}

int main46()
{
	int counts[26];
	char s[1000];
	cin.getline(s, 1000);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0)
		{
			cout << char('a' + i) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;





}