#include <iostream>
using namespace std;

int main()
{
	int i, num1, num2, x, hcf, lcm=1;
	cout << "Input number 1";
	cin >> num1;
	
	cout << "Input number 2";
	cin >> num2;
	
	if (num1<num2)
	{
		x=num2;
	}
	else
	{
		x=num1;
	}
	for(i=1; i<=x; i++)  
    {  

        if(num1%i==0 && num2%i==0)  
        {  
            hcf = i;  
        }  
    }
    lcm=(num1*num2)/hcf;
    
    cout << "LCM =" << lcm;
}
