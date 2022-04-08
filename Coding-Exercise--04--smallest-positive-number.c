/**
 * @file EZCode_003_SmallestPositiveNumber.c
 * @author HyperMechatronics
 * @brief  find the greatest n such that 1 + 2 + 3 + ... + n < 10000
 * @version 0.1
 * @date 2022-01-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1;
    int sum = 1;
    while (sum < 10000) {
        n++;
        sum += n;
    }
    printf("The greatest value of n is: %d", n - 1);
    return 0;
}