/**
 * Purpose: find first digit of a number
 * Create on Jan 9, 2022
 * Author: HyperMechatronics
 * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(abs(number)<10)
    {
        printf("First digit of %d is %d",number,abs(number));
    }
    else
    {
        int tempNumber = abs(number);
        while(tempNumber >=10)
        {
            tempNumber/=10;
        }
        printf("First digit of %d is %d",number,tempNumber);
    }
    return 0;
}
