/**
 * Purpose: add an element to an array
 * Create on Jan 7, 2022
 * Author: HyperMechatronics
 * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter length of array: ");
    int n = importN();

    int array[n];
    printf("The elements of array:\n");
    for(int i = 0; i < n; i ++)
    {
        array[i] = rand()%201 - 100;// between -100 and 100
        printf("%d\t",array[i]);
    }
    printf("\n");

    printf("Enter value need to add: ");
    int value;
    scanf("%d",&value);

    printf("Enter position: ");
    int position = importPosition(n);

    int newArray[n + 1];
    for(int i = 0; i < n + 1; i ++)
    {
        if(i < position)
        {
            newArray[i] = array[i];
        }
        else if(i == position)
        {
            newArray[i] = value;
        }
        else
        {
            newArray[i] = array[i-1];
        }
    }

    printf("The elements of array after add an element:\n");
    for(int i = 0; i < n + 1; i ++)
    {
        printf("%d\t",newArray[i]);
    }

    return 0;
}

int importN()
{
    int n;
    do
    {
        scanf("%d",&n);
        if(n<=0)
        {
            printf("Enter length of array again (n>0): ");
        }
    }
    while(n<=0);
    return n;
}

int importPosition(int n)
{
    int position;
    do
    {
        scanf("%d",&position);
        if(0>position || position > n -1)
        {
            printf("Enter position again (0-%d): ",n-1);
        }
    }
    while(0>position || position > n -1);

    return position;
}