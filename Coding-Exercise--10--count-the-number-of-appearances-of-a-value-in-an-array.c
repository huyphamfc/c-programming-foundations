/**
 * @file EZCode_009_CountTheNumberOfAppearancesOfAValueInAnArray.c
 * @author HyperMechatronics
 * @brief count the number of appearances of a value in an array
 *        array: 2  1   2   3   4   4   5   6   3
 *        2 appears 2 times
 *        1 appears 1 time
 *        3 appears 2 times
 *        4 appears 2 times
 *        5 appears 1 time
 *        6 appears 1 time
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
    int array[] = { 2, 1, 2, 3, 4, 4, 5, 6, 3 };
    int lengthOfArray = sizeof(array) / sizeof(*array);
    printf("The elements of array:\n");
    printArray(array, lengthOfArray);
    int mapArray[lengthOfArray];
    for (int i = 0; i < lengthOfArray; i++) {
        mapArray[i] = 0;
        for (int j = 0; j < lengthOfArray; j++) {
            if (array[j] == array[i]) {
                if (j < i) {
                    break;
                }
                mapArray[i]++;
            }
        }
    }
    printf("The elements of map array:\n");
    printArray(mapArray, lengthOfArray);
    for (int i = 0; i < lengthOfArray; i++) {
        if (mapArray[i] != 0) {
            printf("%d appears %d time(s)\n", array[i], mapArray[i]);
        }
    }
    return 0;
}