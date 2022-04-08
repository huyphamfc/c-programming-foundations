/**
 * @file EZCode_004_SumOfOddNumbers.c
 * @author HyperMechatronics
 * @brief enter number n, calculate sum of odd numbers smaller than n
 * @version 0.1
 * @date 2022-01-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    int sum = 0;

    for (int i = 1; i < n; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers which is smaller than %d is: %d", n, sum);
    return 0;
}