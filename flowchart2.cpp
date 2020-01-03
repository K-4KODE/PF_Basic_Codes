#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
    int c;
	
	cout << "Enter value 1? ";
	cin >> a;
	
	cout << "Enter value 2? ";
	cin >> b;

	cout << "Enter value 3? ";
	cin >> c;
	
	if (a>b)
	{
		if (a>c)
		{
			cout << "Greater value is " << a;
		}
		else
		{
			cout << "Greater value is " << c;
		}
	}
	else if (b>a)
	{
		if (b>c)
		{
			cout << "Greater value is " << b;
		}
		else
		{
			cout << "Greater value is " << c;
		}
	}
	
	cout<<endl;
}
