#include <iostream>
using namespace std;


bool Arms(int num);
int main()
{
	int num;
    cout << "Enter Number" << endl;
    cin >> num;
}

bool Arms(int num)
{
	int rem, orig, sum=0, count=0;
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
