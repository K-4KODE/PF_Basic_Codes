#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, number;
    int *dma;
 
    printf("How many numbers do you want to compare: ");
    scanf("%d", &number);
 
    dma = (int*) calloc(number, sizeof(int*));
    for(i = 0; i < number; i++)
    {
       printf("Number %d ", i+1);
       scanf("%d", dma+i);
    }
    for(i = 1; i < number; i++)
    {
       if(*dma < *(dma+i))
           *dma = *(dma+i);
    }
    printf("Largest Number = %d", *dma);
    return 0;
}

