/*
 * Purpose: random number between 0 to ...
 * Create on Jan 6, 2022
 * Author: HyperMechatronics
 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = rand()%5;//between 0 and 4
    printf("%d",number);
    return 0;
}