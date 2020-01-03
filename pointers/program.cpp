#include <iostream>
using namespace std;

int* createintarray();
void displayarray(int*);

int main()
{
	int *localarrptr = createintarray();
	displayarray(localarrptr);
	cout << endl << "Marks the end of Program" ;
	return 0;
}

int* createintarray()
{
	int size;
	cout << endl << "Enter size of Array";
	cin >> size;
	int *arr = new int[size];
	return arr;
}

void displayarray(int *localarr)
{
	for (int i=0; i<10; i++)
	{
		cout << endl << "Value at index " << i << " is " << localarr[i];
	}
}
