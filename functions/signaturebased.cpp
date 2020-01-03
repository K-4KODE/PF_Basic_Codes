#include<iostream>

using namespace std;

int Add1 (int, int);
int Add2();
void Add3(int, int);
void Add4();

int q=2, w=5;

int main()
{
    int a, b;
    cout << "Enter 1st number" ;
    cin >> a;
    cout << "Enter 2nd number" ;
    cin >> b;
    cout << "1st function" << Add1(a,b);
    cout << "2 function" << Add2();
    cout << "3 function" ;
    Add3(a,b);
    cout << "3 function" ;
    Add4();
}


int Add1 (int a, int b)
{
	return a+b;
}

int Add2()
{
	return q+w;
}

void Add3 (int a, int b)
{
	cout << a+b;
}

void Add4 ()
{
	cout << q+w;
}
