#include <iostream>
using namespace std;
void change(bool*L,int s)
{
	for (int i = s; i < 100; i += s+1)
	{
		L[i] = !L[i];
	}
}

int main43()
{
	bool L[100];
	for (int i = 0; i < 100; i++)
	{
		L[i] = true;
	}
	for (int i = 1; i < 100; i++)
	{
		change(L, i);
	}
	for (int i = 0; i < 100; i++)
	{
		if (L[i])
			cout << i + 1 << '\t';
	}
	return 0;
}