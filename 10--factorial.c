/**
*   Purpose: calculate factorial of number
*   Created on Jan 5, 2022
*   Author: HyperMechatronics
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = importN();
    int factorial = calculateFactorial(n);
    printf("The factorial of %d is %d",n,factorial);
    return 0;
}

int importN()
{
    int n;
    printf("Enter number n: ");
    do
    {
        scanf("%d",&n);
        if(n<0)
        {
            printf("Enter number n again (n>=0): ");
        }
    }
    while(n<0);
    return n;
}

int calculateFactorial(n)
{
    int factorial = 1;
    switch (n)
    {
    case 0:
    case 1:
        break;
    default:
        for(int i = 1; i <= n; i ++)
        {
            factorial*=i;
        }
    }
    return factorial;
}
