/**
 * @file EZCode_010_ReverseAnArray.c
 * @author HyperMechatronics
 * @brief reverse an array
 *          1   2   3   4   5
 *          5   4   3   2   1
 * @version 0.1
 * @date 2022-02-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int lengthOfArray) {
    for (int i = 0; i < lengthOfArray; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = { 1, 2, 3, 4, 5 };
    int lengthOfArray = sizeof(array) / sizeof(*array);
    printf("The elements of array:\n");
    printArray(array, lengthOfArray);
    for (int i = 0; i < lengthOfArray / 2; i++) {
        int temp = array[i];
        array[i] = array[lengthOfArray - 1 - i];
        array[lengthOfArray - 1 - i] = temp;
    }
    printf("The elements of array after reverse:\n");
    printArray(array, lengthOfArray);
    return 0;
}