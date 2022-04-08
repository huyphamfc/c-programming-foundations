/**
 * Purpose: count appearances of values in array
 * Create on Jan 12, 2022
 * Author: HyperMechatronics
 * Example: array[6] = { 1, 2, 2, 3, 4, 2 };
 *             1 appears 1 time
 *             2 appears 3 times
 *             3 appears 1 time
 *             4 appears 1 time
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = { 1, 2, 2, 3, 4, 2 };
    int arraySize = sizeof array / sizeof*array;
    int stats[] = { 0, 0, 0, 0, 0, 0 };
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            if (array[j] == array[i])
            {
                if (j < i)
                {
                    break;
                }
                else
                {
                    stats[i]++;
                }
            }
        }
        printf("%d\t",array[i]);
    }
    printf("\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d\t",stats[i]);
    }
    return 0;
}