#include <iostream>
using namespace std;
int main()
{
	int number=0;
	int i;
	int n;
	int output;
	
	cout << "INPUT Number";
	cin >> number;
	
	cout << "INPUT range";
	cin >> n;
	
	
	for (i=1;i<n+1;i++)
	{
		output=  number*i;
		cout << "   " << output <<endl; 
	}
	
	return 0;
}
