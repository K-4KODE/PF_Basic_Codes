#include <iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;
	int c=9;

	
	while (a<=10)
	{
		b=1;
		
	while (c>=11-a)
		{
			cout << " ";
			c--;
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
