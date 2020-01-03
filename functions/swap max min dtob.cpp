#include <iostream>
using namespace std;

void swap(int a, int b);
int max(int a, int b);
int min(int a, int b);
void dtob(int x);

int main()
{
	int a, b, x;
	
	cout << "Input A";
	cin >> a;
	cout << "Input b";
	cin >> b;
	
	cout << "A = " << a ;
	cout << "B = " << b ;
	
	swap(a,b);
	max(a,b);
	min(a,b);
	
	cout << "Enter Decimal number";
	cin >> x;
	
	dtob(x);
}

void swap(int a, int b)
{
	int t = a;
	a=b;
	b=t;
	
	cout << "A = " << a ;
	cout << "B = " << b ;
}


int max(int a, int b)
{
	if (a>b)
	{
		cout << "A is Greater" << a;
	}
	else
	{
		cout << "B is Greater" << b;
	}
	
	return 0;
}
int min(int a, int b)
{
	if (a<b)
	{
		cout << "A is Minimum" << a;
	}
	else
	{
		cout << "B is Minimum" << b;
	}
	return 0;
}




void dtob(int x)
{
	int b=0,r,i=1;
	while(x!=0)
	{
		r=x%2;
		b=b+r*i;
		x=x/2;
		i=i*10;
	}
	cout << "Binary value is" << b;
}
