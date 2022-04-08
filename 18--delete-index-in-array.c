/**
 * Purpose: delete an index in an array
 * Create on Jan 9, 2022
 * Author: HyperMechatronics
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 0;
    int array[] = { 1, 2, 3, 4, 5, 6, 7 };
    printf("The elements of array        : ");
    for(int i = 0; i < (sizeof array / sizeof * array); i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    int newArray[(sizeof array / sizeof * array) - 1];
    printf("The elements of new array    : ");
    for(int i = 0; i < (sizeof newArray / sizeof * newArray); i++)
    {
        if(i < index)
        {
            newArray[i] = array[i];
            printf("%d\t",newArray[i]);
        }
        else
        {
            newArray[i] = array[i+1];
            printf("%d\t",newArray[i]);
        }
    }
    return 0;
}