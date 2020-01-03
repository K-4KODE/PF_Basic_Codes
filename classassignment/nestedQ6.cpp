#include <iostream>
using namespace std;
int main()
{
	int number=0;
	int i;
	int output;
	
	cout << "INPUT Number";
	cin >> number;
	
	for (i=1;i<11;i++)
	{
		output=  number*i;
		cout << endl << number << " * " << i << " = " << output; 
	}
	
	return 0;
}
