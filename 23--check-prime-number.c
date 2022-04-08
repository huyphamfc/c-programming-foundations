/**
 * Purpose: check prime number
 * Create on Jan 13, 2022
 * Author: HyperMechatronics
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int number = 8;
    int checkReuslt = check(number);
    printf("%d",checkReuslt);
    return 0;
}

int check (int number)
{
    if (number <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= number/2; i++)
        {
            if (number % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}