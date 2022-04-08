/**
 * @file DEV_034_IsSquareNumber.c
 * @author HyperMechatronics
 * @brief check given number is a square number or not
 * @version 0.1
 * @date 2022-02-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int isSquareNumber(int number) {
    int i = 1;
    int testNumber = 0;
    for (int i = 1; testNumber < number; i++) {
        testNumber = i * i;
        if (testNumber == number) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int number = 16;
    int result = isSquareNumber(number);
    if (result == 1) {
        printf("%d is a square number\n", number);
    }
    else {
        printf("%d is NOT a square number\n", number);
    }
    return 0;
}