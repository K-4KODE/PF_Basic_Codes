#include <iostream>
using namespace std;


int* createintarray(int);
void inputvalues(int*,int);
void displayarray(int*, int);


int main()
{
	int size;
	cout << endl << "Enter size of Array";
	cin >> size;
	cout << "size = " << size;
	int *localarrptr = createintarray(size);
	inputvalues(localarrptr, size);
	displayarray(localarrptr, size);
	cout << endl << "Marks the end of Program" ;
	return 0;
}

int* createintarray(int size)
{
	
	int *arr = new int[size];
	return arr;
}

void inputvalues(int *local, int size)
{
	for (int i=0; i<size; i++)
	{
		cout << endl << "Enter value for index " << i << " ";
		cin  >> local[i];
	}
}

void displayarray(int *localarr,int size)
{
	for (int i=0; i<size; i++)
	{
		cout << endl << "Value at index " << i << " is " << localarr[i];
	}
}
