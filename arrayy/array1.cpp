#include <iostream>
using namespace std;

void Append ();
void Display ();
void Delete ();
int arr[10];
int next=0;
int main()
{
	int choice;
	while(1)
	{
		cout << endl << "M E N U";
		cout << endl << "Enter 1 to APPEND";
		cout << endl << "Enter 2 to DELETE";
		cout << endl << "Enter 3 to SEARCH";
		cout << endl << "Enter 4 to SORT";
		cout << endl << "Enter 5 to DISPLAY";
		cout << endl << "Enter 6 to EXIT";
		cout << endl << endl;
		cin >> choice;
		switch(choice)
		{
			case 1 : Append (); break;
			case 2 : Delete (); break;
			case 3 : 
			case 4 : 
			case 5 : Display (); break;
			case 6 : return 0 ;
		}
	}
}

void Append()
{
	
	int num;
	if (next < 10)
	{
		cout << endl << "Enter value";
		cin >> num;
		arr[next] = num;
		next ++;
	}
	else
	{
		cout << endl << "array full delete few values";
	}
}
void Delete()
{
	int pos, n;
	if (next > 0)
	{
		cout << endl << "Enter position";
		cin >> pos;
		arr[pos] == " ";
	}
}
void Display()

{
	
	for (int i=0; i<next; i++){
	
	cout << endl << arr[i];
	}
}


