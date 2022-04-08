/**
 * @file EZCode_008_ShiftAnArrayToTheRight.c
 * @author HyperMechatronics
 * @brief shift the elements of an array to right rotate: 1 2 3 4 5 => 5 1 2 3 4
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
    int theNumberOfRotateTime = 25;
    int k = theNumberOfRotateTime % lengthOfArray;
    while (k > 0) {
        int temp = array[lengthOfArray - 1];
        for (int i = lengthOfArray - 1; i >= 1; i--) {
            array[i] = array[i - 1];
        }
        array[0] = temp;
        k--;
    }
    printf("The elements of array after shift to right %d time(s):\n", theNumberOfRotateTime);
    printArray(array, lengthOfArray);
    return 0;
}