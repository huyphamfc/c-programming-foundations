/**
 * Purpose: check that all of digits of a number, odd or even
 * Create on Jan 12, 2022
 * Author: HyperMechatronics
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int number = 1357911;
    int check = checkDigits(number);
    if (check == 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}

int checkDigits(int number)
{
    int tempNumber = abs(number);
    while(tempNumber!=0)
    {
        if ((tempNumber%10)%2==0)
        {
            return -1;
        }
        tempNumber/=10;
    }
    return 0;
}