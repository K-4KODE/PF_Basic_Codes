#include <iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;
	int c=0;
	
	while (a<=10)
	{
		b=1;
		for (c=9; c>=1; c--)
			{
				cout << " ";
			}
		while (b<=2*a+1)
		{
			
			cout << "*";
			b++;
		}
		cout << endl;
		a++;
	}
	return 0;
}
