/**
 * @file EZCode_005_SumOfSquareNumbers.c
 * @author HyperMechatronics
 * @brief calculate sum of the power of numbers: x^1 + x^2 + ... + x^n
 * @version 0.1
 * @date 2022-01-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int powerOfNumber(int base, int indexOfPower) {
    int powerOfNumber = base;
    switch (indexOfPower) {
    case 0:
        return 1;
    case 1:
        return base;
    default:
        for (int i = 2; i <= indexOfPower; i++) {
            powerOfNumber *= base;
        }
        return powerOfNumber;
    }
}

int main() {
    int x = 10;
    int n = 4;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += powerOfNumber(x, i);
    }
    printf("Sum is %d", sum);
    return 0;
}