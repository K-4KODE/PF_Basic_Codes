#include <iostream>
using namespace std;
int main()
{
	int cube;
	int i;
	int a;

	cout << "Enter value? ";
	cin >> cube;
	
	for(i=1; i<=cube; i++)
	{
		a=i*i*i;
		cout << i << "Cube = "<< a << endl ; 
	}
}
