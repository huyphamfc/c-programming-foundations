/*
 * Purpose: Enter positive integer numbers from keyboard
 *          1. How many digits of numbers?
 *          2. What is the first digits of number?
 *          3. What is the last digits of number?
 *          4. Calculate sum of digits of number?
 *          5. Reverse number?
 * Create on Jan 5, 2022
 * Author: HyperMechatronics
 * */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = importN();
    int tempNumber = number;
    int count = 0;
    int sum = 0;
    int reverseNumber = 0;
    while(tempNumber!=0)
    {
        count++;
        reverseNumber = reverseNumber*10 + tempNumber%10;
        sum+=tempNumber%10;
        tempNumber/=10;
    }
    printf("Number %d has %d digits\n",number,count);
    printf("Number %d has first digit is %d\n",number,reverseNumber%10);
    printf("Number %d has last digit is %d\n",number,number%10);
    printf("Number %d has sum of digits is %d\n",number,sum);
    printf("Number %d has reverse number is %d\n",number,reverseNumber);
    return 0;
}

int importN()
{
    int n;
    printf("Enter number n: ");
    do
    {
        scanf("%d",&n);
        if(n<=0)
        {
            printf("Enter number n again (n>0): ");
        }
    }
    while(n<=0);
    return n;
}
