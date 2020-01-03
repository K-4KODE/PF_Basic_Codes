#include <iostream>
using namespace std;

int main()
{
    int i, fact, num, num1, s = 0, x;
	cout << " Input number ";
    cin >> num;
    num1 = num;
    for (x = num; x > 0; x = x / 10)
	{
        fact = 1;
        for (i = 1; i <= x % 10; i++)
		{
        fact = fact * i;
        }
        s = s + fact;
    }
    if (s == num1)
	{
        cout << "Strong number." << endl;
    }
    else 
	{
        cout << "not a Strong number." << endl;
    }
}
