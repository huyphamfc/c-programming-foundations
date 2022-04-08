/**
 * Purpose: delete element has value equal to x in an array
 * Create on Jan 9, 2022
 * Author: HyperMechatronics
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1;
    int array[] = { 1, 2, 3, 4, 2, 1, 2 };
    int count = 0;
    printf("The elements of array    : ");
    for(int i = 0; i < 7; i++)//7 is length of array
    {
        printf("%d\t",array[i]);
        if(array[i] == x)
        {
            count++;
        }
    }
    printf("\n");
    if(count == 0)
    {
        printf("Array does not have any element which has value equal to x");
    }
    else if(count == sizeof array/sizeof * array)
    {
        printf("Array is empty after delete the element(s) which has value equal to x");
    }
    else
    {
        int newArray[(sizeof array/sizeof * array) - count];
        int j = 0;
        for(int i = 0; i < (sizeof array/sizeof * array) ; i++)
        {
            if(array[i] != x)
            {
                newArray[j] = array[i];
                j++;
            }
        }
        printf("The elements of new array: ");
        for(int i = 0; i < (sizeof newArray/sizeof * newArray); i++)
        {
            printf("%d\t",newArray[i]);
        }
        printf("\n");
    }
    return 0;
}