#include <iostream>
using namespace std;

int* createintarray(int);
void displayarray(int*);

int main()
{
	int size;
	cout << endl << "Enter size of Array";
	cin >> size;
	int *localarrptr = createintarray(size);
	displayarray(localarrptr);
	cout << endl << "Marks the end of Program" ;
	return 0;
}

int* createintarray(int size)
{
	
	int *arr = new int[size];
	return arr;
}

void displayarray(int *localarr, int size)
{
	for (int i=0; i<size; i++)
	{
		cout << endl << "Value at index " << i << " is " << localarr[i];
	}
}
