#include<stdio.h>
#include<string.h>
int main() 
{
  char w[100],x[100];
  int i,j,pstn,len;
  printf("Enter string:");
  gets(w);
 printf("Enter position and length of characters you want to extract:");
  scanf("%d%d", & pstn, & len);
  for (i=0,j=pstn;i<len;i++,j++) 
  {
    x[i] = w[j-1];
  }
  x[i] = '\0';
  printf("string at position %d and of length %d is %s",pstn,len,x);
}
