#include <iostream> 
#include <cctype>
using namespace std; 

int main()
{
    int num,i=1,sum=0;
    cout << "Enter a number: ";
    cin >> num;
    while(i<num)
   {
       if(num%i==0)
       sum=sum+i;
       i++; 
	}
 
	if(sum==num)
    	cout << "perfect number"; 
	else
    	cout << "not a perfect number";
     

return 0;
}
