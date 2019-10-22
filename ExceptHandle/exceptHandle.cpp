#include <iostream>
using namespace std;
int main()
{
	int i = 10, j = 0, k;
	try
	{
		if (j == 0)
			throw j;
		else
		{
			k = i / j;
			cout << k;
		}
	}
	catch (int e)
	{
		if (e == 0)
			cout << "Divide by 0 error";
	}
	return 0;
}
/*Output
Divide by 0 error*/