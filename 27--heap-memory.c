/**
*	Purpose: store an array in Heap memory
*	Create on Jan 24, 2022
*	Author: HyperMechatronics
*/

#include <stdio.h>
#include <stdlib.h>

void createArray(int *pointer, int lengthOfArray) {
    for (int i = 0; i < lengthOfArray; i++) {
        *(pointer + i) = rand()%10;
    }
}

void createArray_2(int *pointer, int lengthOfArray) {
    for (int i = 0; i < lengthOfArray; i++) {
        *(pointer + i) = i + 1;
    }
}

void printArray(int *pointer, int lengthOfArray) {
    for (int i = 0; i < lengthOfArray; i++) {
        printf("%d\t",*(pointer + i));
    }
    printf("\n");
}

void bubbleSort(int *pointer, int lengthOfArray) {
    for (int i = lengthOfArray - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (*(pointer + j) > *(pointer + j + 1)) {
                int temp = *(pointer + j);
                *(pointer + j) = *(pointer + j + 1);
                *(pointer + j + 1) = temp;
            }
        }
    }
}

void selectionSort(int *pointer, int lengthOfArray) {
    for (int i = 0; i < lengthOfArray - 1; i++) {
        int min = i;
        for (int j = i + 1; j < lengthOfArray; j++) {
            if (*(pointer + j) < *(pointer + i)) {
                min = j;
            }
        }
        int temp = *(pointer + i);
        *(pointer + i) = *(pointer + min);
        *(pointer + min) = temp;
    }
}

void insertionSort(int *pointer, int lengthOfArray) {
    for (int i = 1; i < lengthOfArray; i++) {
        int temp = *(pointer + i);
        int j = i - 1;
        while (j >= 0 && *(pointer + j)> temp) {
            *(pointer + j + 1) = *(pointer + j);
            j--;
        }
        *(pointer + j + 1) = temp;
    }
}

int main() {
    int lengthOfArray = 5;
    int *array = (int*)realloc(NULL,lengthOfArray*sizeof(int));
    printf("The elements of array:\n");
    createArray_2(array,lengthOfArray);
    printArray(array,lengthOfArray);
    //printf("The elements of array after sort:\n");
    //bubbleSort(array,lengthOfArray);
    //selectionSort(array,lengthOfArray);
    //insertionSort(array,lengthOfArray);
    //printArray(array,lengthOfArray);
    printf("The elements of array after extend:\n");
    lengthOfArray++;
    int *arrayExt = (int*)realloc(array,lengthOfArray*sizeof(int));
    *(arrayExt + lengthOfArray - 1) = 999;
    printArray(array,lengthOfArray);
    printf("The elements of array after reduce:\n");
    lengthOfArray -= 2;
    int *arrayDelete = (int*)realloc(array,lengthOfArray*sizeof(int));
    printArray(array,lengthOfArray);
    return 0;
}