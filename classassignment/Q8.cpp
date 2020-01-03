#include <iostream>
using namespace std;
int main()
{
	int i;
	int y=0;
	int z=0;
	int n=0;
	cout << "INPUT RANGE";
	cin >> n;
	
	for (i=0;i<n;i++)
	{
		if (i%2==1)
		{
			z=i;
			y +=z;
			cout << z << endl;
		}
			
		
	}
	cout << y;
	
}
	
