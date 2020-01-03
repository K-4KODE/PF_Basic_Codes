#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int opt;
	 
	cout << "Enter value1? ";
	cin >> a;
	cout << "Enter value2? ";
	cin >> b;

	
	cout << "    MENU    ";
	cout << "\n 1. Add      ";
	cout << "\n 2. Subtract ";
	cout << "\n 3. Multiply ";
	cout << "\n 4. Exit     ";

	cout << "\n Enter operator number? ";
	cin >> opt;
		
	switch (opt)
	{
		case 1:
			cout << "The sum is " << a+b; break;
		case 2:
			cout << "The difference is " << a-b; break;
		case 3:
			cout << "The Product is " << a*b; break;
		case 4:
			break;
		default:
			cout << "INVALID"; break;
	}
	
	cout << endl;
}
	

