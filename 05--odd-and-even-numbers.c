/**
*   Purpose: print odd/even numbers less than 10
*   Created on Jan 5, 2022
*   Author: HyperMechatronics
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    oddNumbers();
    evenNumbers();
    return 0;
}

int oddNumbers()
{
    printf("Odd number less than 10:\n");
    for(int i =1; i <10; i+=2)
    {
        printf("%d\t",i);
    }
    printf("\n");
    return 0;
}

int evenNumbers()
{
    printf("Even number less than 10:\n");
    for(int i =2; i <10; i+=2)
    {
        printf("%d\t",i);
    }
    printf("\n");
    return 0;
}
