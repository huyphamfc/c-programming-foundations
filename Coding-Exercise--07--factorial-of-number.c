/**
 * @file EZCode_006_FactorialOfNumber.c
 * @author HyperMechatronics
 * @brief calculate factorial of number: n!, 0!=1, 1!=1
 * @version 0.1
 * @date 2022-01-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6;
    int factorialOfNumber = 1;
    if (n >= 2) {
        for (int i = 1; i <= n; i++) {
            factorialOfNumber *= i;
        }
    }
    printf("%d", factorialOfNumber);
    return 0;
}