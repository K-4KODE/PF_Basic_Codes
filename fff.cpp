#include <iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;

	
	while (a<=10)
	{
		b=1;
		while (b<=a)
		{
			cout << a;
			b++;
		}
		cout << endl;
		a++;
	}
	return 0;
}
