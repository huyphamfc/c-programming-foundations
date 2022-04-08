/**
*   Purpose: count the numbers divisible by 3 from 3 to 10
*   Created on Jan 5, 2022
*   Author: HyperMechatronics
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = divisionBy3();
    printf("There are %d numbers divisible by 3 from 3 to 10",count);
    return 0;
}

int divisionBy3()
{
    int count = 0;
    for(int i = 3; i <= 10; i += 3)
    {
        count++;
    }
    return count;
}