#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cout << "Input A";
	cin >> a;
	cout << "Input b";
	cin >> b;
	
	cout << "A = " << a ;
	cout << "B = " << b ;
	
	swap(a , b);
	
	cout << "A = " << a ;
	cout << "B = " << b ;
	
}
