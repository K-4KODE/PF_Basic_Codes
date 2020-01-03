#include <iostream>

using namespace std;

int main()
{
    int num1, num2, lcm;
	cout << "Input number 1";
	cin >> num1;
	
	cout << "Input number 2";
	cin >> num2;
   
    if(num1>num2)
    	lcm = num1;
    else
        lcm = num2;
    while(1) 
    {
    	if( lcm%num1==0 && lcm%num2==0 )
		{
        	cout<<"The LCM is " <<lcm;
         	break;
        }
        lcm++;
    }
    return 0;
}
