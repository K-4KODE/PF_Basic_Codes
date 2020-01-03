#include <iostream>
using namespace std;
int main()
{
    int number, on, mod, answer = 0;
    cout << "Enter 3 dig integer: ";
    cin >> number;
    
    on = number;
    while (on != 0)
    {
        mod = on%10;
        answer += mod*mod*mod;
        on /= 10;
    }
    if(answer == number)
        cout << number << " is an Armstrong number." ;
    else
        cout << number << " is not an Armstrong number.";
    return 0;
}
