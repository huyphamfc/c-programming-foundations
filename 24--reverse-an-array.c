/**
 * Purpose: reverse an array
 * Create on Jan 13, 2022
 * Author: HyperMechatronics
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int array[5] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    for (int i = 0, j = 4; i < j; i++, j--)
    {
        int tempIndex = array[i];
        array[i] = array[j];
        array[j] = tempIndex;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}