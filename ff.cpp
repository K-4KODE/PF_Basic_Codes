#include <iostream>
using namespace std;
int main()
{
	int a=1;
	int b=0;

	
	while (a<=10)
	{
		b=10;
		while (b>=11-a)
		{
			cout << a;
			b--;
		}
		cout << endl;
		a++;
	}
	return 0;
}
