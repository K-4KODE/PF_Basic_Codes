#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int num,rem, orig, sum=0, count=0;
	while (1)
	{
	
	cout << "Enter Number" << endl;
    cin >> num;
    if(num!=0)
    {
	
    
    orig = num;
    while(num!=0)
    {
        num/=10;
        count++;
    }
    cout << count << endl ;
    
    num=orig;
    cout << num << endl;
    
    while(num!=0)
    {
        rem = num%10;
        cout << rem << endl;
        sum=sum+(int)pow(rem,count);
        num/=10;
    }
    if (sum == orig)
    {
        cout << "Armstrong";

    }
    else
    {
        cout << "Not armstrong";
    }
    
	}
	else
	break;
	
	}
	return 0;
}
