#include <iostream>
using namespace std;

void asn(int)

int main()
{
    
    cout << "Enter 3 dig integer: ";
    cin >> number;
    asn(number);
   
}

void asn(int number)
{
	int on, mod, answer = 0;
	
	while (on != 0)
    {
        mod = on%10;
        answer += mod*mod*mod;
        on /= 10;
    }
     on = number;
    if(answer == number)
        cout << number << " is an Armstrong number." ;
    else
        cout << number << " is not an Armstrong number.";
    return 0;
}
