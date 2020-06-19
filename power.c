#include<stdio.h>
int main(){
	int i,n,p,n2;
	printf("Enter number");
	scanf("%d",&n);
	printf("Enter power");
	scanf("%d",&p);
	n2=n;
	for(i=1;i<p;i++){
		n=n*n2;
	}
	printf("Number = %d", n);
}
