/**
*   Purpose: reverse number
*   Created on Jan 5, 2022
*   Author: HyperMechatronics
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = importN();
    int reverseNumber = 0;
    while(n!=0)
    {
        reverseNumber = reverseNumber*10 + n%10;
        n/=10;
    }
    printf("Reverse number: %d",reverseNumber);
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
