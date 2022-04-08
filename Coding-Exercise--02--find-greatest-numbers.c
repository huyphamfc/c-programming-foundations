/**
 * @file EZCode_002_FindGreatestNumbers.c
 * @author HyperMechatronics
 * @brief find the greatest number of 3 numbers
 * @version 0.1
 * @date 2022-01-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 9;
    int b = 5;
    int c = 3;
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("The greatest number is %d", max);
    return 0;
}