/**
 * @file EZCode_007_DeleteElementInArray.c
 * @author HyperMechatronics
 * @brief delete the elements have value equal to max value in an array
 * @version 0.1
 * @date 2022-02-02
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
    int array[] = { 4,2,4,7,6,3,8,6,8 };
    int lengthOfArray = sizeof(array) / sizeof(*array);
    printf("The elements of array:\n");
    printArray(array, lengthOfArray);
    int max = array[0];
    int count = 1;
    if (count == lengthOfArray) {
        printf("Array is empty after delete the elements have max value\n");
    }
    else {
        // determine the max value & the numbers of the elements which have max value
        for (int i = 1; i < lengthOfArray; i++) {
            if (array[i] == max) {
                count++;
            }
            if (array[i] > max) {
                max = array[i];
                count = 1;
            }
        }
        int tempArray[lengthOfArray - count];
        for (int i = 0, j = 0; i < lengthOfArray; i++) {
            if (array[i] != max) {
                tempArray[j] = array[i];
                j++;
            }
        }
        printArray(tempArray, lengthOfArray - count);
    }
    return 0;
}