#include<iostream>
using namespace std;

struct record
{
	int Sno;
	char name[50];
	char phone[11];
	char adress[100];
	record *p;
};
int main()
{
	record Z;
	record *p = new record;
	p->Sno=1;
	Z.Sno=1;
	gets(Z.name);
}
