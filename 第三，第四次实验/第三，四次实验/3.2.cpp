#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int count = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
			{
			count++;
		}
	}
	return(count >= 2 ? 0 : 1);
}




int main()
{
	int a = 1;
	for (int i = 2; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			cout << i << '\t';
			a++;
			if (a % 10 == 0)
				cout << endl;
		}
	}
	return 0;
	
	
}