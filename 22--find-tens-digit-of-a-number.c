/**
 * Purpose: find tens digit of a number
 * Create on Jan 12, 2022
 * Author: HyperMechatronics
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = -120763;
    int tensDigit = (abs(number)/10)%10;
    printf("%d",tensDigit);
    return 0;
}