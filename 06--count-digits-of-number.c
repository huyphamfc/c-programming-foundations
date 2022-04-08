/**
*   Purpose: count digits of number
*   Created on Jan 5, 2022
*   Author: HyperMechatronics
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = importN();
    int count = countDigitsOfNumber(n);
    printf("%d has %d digits",n,count);
    return 0;
}

int importN()
{
    int n;
    printf("Enter number n: ");
    do
    {
        scanf("%d",&n);
        if(n<=0)
        {
            printf("Enter number n again (n>0): ");
        }
    }
    while(n<=0);
    return n;
}

int countDigitsOfNumber(int n)
{
    int count = 0;
    if(n==0)
    {
        count = 1;
    }
    else
    {
        while(n!=0)
        {
            count++;
            n/=10;
        }
    }
    return count;
}