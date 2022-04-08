/**
 * Purpose: find the position which has value equal to minimum positive integer number
 * Create on Jan 7, 2022
 * Author: HyperMechatronics
 * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int array[10] = {-5,-7,-1,-21,-9,-7,-5,-10,-7,-3};
    //int array[10] = {-4,-7,5,8,-5,-6,-4,3,0,10};
    printf("The elements of array: ");
    for(int i = 0; i < (sizeof array / sizeof * array); i ++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    int positionFirstPositiveNumber = -1;    
    for(int i = 0; i < (sizeof array / sizeof * array); i ++)
    {
        if(array[i]>0)
        {
            minimumPositiveNumber = array[i];
            positionFirstPositiveNumber = i;
            break;
        }
    }
    if(positionFirstPositiveNumber == -1)
    {
        printf("Array does not have positive integer number");
    }
    else
    {
		int minimumPositiveNumber = 0;
        for(int i = positionFirstPositiveNumber + 1; i < (sizeof array / sizeof * array); i ++)
        {
            if(array[i] < minimumPositiveNumber && array[i] > 0)
            {
                minimumPositiveNumber = array[i];
            }
        }
        printf("Position which has value equal to minimum positive integer number: ");
        for(int i = positionFirstPositiveNumber; i < (sizeof array / sizeof * array); i ++)
        {
            if(array[i] == minimumPositiveNumber)
            {
                printf("array[%d]\t",i);
            }
        }
    }
    return 0;
}