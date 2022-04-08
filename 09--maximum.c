/**
    Purpose: Find greatest number of 3 given numbers
    Created on Jan 4,2022
    Author: HyperMechatronics
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max;
    printf("Enter number A: ");
    scanf("%d",&a);
    printf("Enter number B: ");
    scanf("%d",&b);
    printf("Enter number C: ");
    scanf("%d",&c);
    max = findMaximum(a,b,c);
    printf("Maximum is %d",max);
    return 0;
}

int findMaximum(int a, int b, int c)
{
    int max = a;
    if(max<b)
    {
        max = b;
    }
    if(max < c)
    {
        max =c;
    }
    return max;
}