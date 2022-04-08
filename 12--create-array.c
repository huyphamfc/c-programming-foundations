/*
 * Purpose: enter number N from keyboard, create an array has N element(s)
 * Create on Jan 6, 2022
 * Author: HyperMechatronics
 * */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = importN();
    int array[n];
    printf("The elements of array:\n");
    for(int i = 0; i < (sizeof array / sizeof * array); i ++)
    {
        array[i] = rand()%8 + 1;// between 1 and 9
        printf("%d\t",array[i]);
    }

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