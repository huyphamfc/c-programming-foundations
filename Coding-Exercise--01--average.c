/**
 * @file EZCode_001_Average.c
 * @author HyperMechatronics
 * @brief enter n numbers and calculate average value
 * @version 0.1
 * @date 2022-01-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int sum;

    printf("Enter the number of numbers: ");
    do {
        scanf("%d", &n);
        if (n < 1) {
            printf("Enter n again (n > 0): ");
        }
    } while (n < 1);

    for (int i = 0; i < n; i++) {
        int number;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);
        sum += number;
    }

    printf("The average value of %d numbers is: %0.1f", n, (sum * 1.0 / n));
    return 0;
}