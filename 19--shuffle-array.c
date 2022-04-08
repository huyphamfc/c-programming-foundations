/**
 * Purpose: shuffle array
 * Create on Jan 10, 2022
 * Author: HyperMechatronics
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int n = (sizeof array / sizeof * array)/2;
    printf("The elements of array        : ");
    for(int i = 0; i < (sizeof array / sizeof * array); i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    int newArray[(sizeof array / sizeof * array)];
    printf("The elements of new array    : ");
    for(int i = 0; i < n; i++)
    {
        newArray[2*i] = array[i];
        printf("%d\t",newArray[2*i]);
        newArray[2*i + 1] = array[n+i];
        printf("%d\t",newArray[2*i + 1]);
    }
    return 0;
}