#include <iostream>
using namespace std;

void PassbyRef(int *);

int main()
{
	int a = 65;
	int *b = new int; // or int z (both are same) int *b = new int (dynamic) int z (static) |delete b(garbage collection) ||This technique will return address only
	*b = 55;
	
	PassbyRef(&a);
	
//	cout << endl << "address = " << iptr;
	cout << endl << "value = " << *b;
	
	return 0;
}

void PassbyRef(int *p)
{
	cout << endl << "The value at given address is " << *p;
	*p = 134;
}
