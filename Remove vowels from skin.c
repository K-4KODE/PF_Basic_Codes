#include<stdio.h>
#include<string.h>
int main() 
{
  char w[60];
  int h,i,Length;
  printf("Enter sentence of less than 60 characters:");
  gets(w);
  Length = strlen(w);
  for (i=0;i<Length;i++) 
  {
    if (w[i] == 'A' || w[i] == 'E' || w[i] == 'I' ||
      w[i] == 'O' || w[i] == 'U' || w[i] == 'a' ||
      w[i] == 'e' || w[i] == 'i' || w[i] == 'o' ||
      w[i] == 'u') 
	  {
      for (h=i;h<Length;h++) 
	  {
        w[h] = w[h+1];
      }
      Length--;
    }
  }
  printf("Sentence after deleting vowels is: %s",w);
}
