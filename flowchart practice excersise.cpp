#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int tm;
	int tsm;
	int p;
	float percentage;
	
	
	cout << "Enter subject1 marks? ";
	cin >> a;
	cout << "Enter subject2 marks? ";
	cin >> b;
	cout << "Enter subject3 marks? ";
	cin >> c;
	
	tm = a+b+c;
	
	p = tm/tsm;
	
	percentage = p*100;
	 
	cout << percentage;
	
	if (percentage>=87)
	{
		cout << "A";
	}
	else if (percentage<87 &&  percentage>75)
	{
		cout << "B";
	}
	else
	{
		cout << "Failed";
	}
}
