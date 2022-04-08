/**
 * Purpose: find last digit of a number
 * Create on Jan 9, 2022
 * Author: HyperMechatronics
 * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    int number;
    scanf("%d",&number);
    printf("Last digit of number %d is %d",number,abs(number)%10);
    return 0;
}