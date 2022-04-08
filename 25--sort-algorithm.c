/**
 * Purpose: Sort Algorithm
 * Create on Jan 16, 2022
 * Author: HyperMechatronics
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[] = { 64, 25, 12, 22, 11 };
    printArray(array,sizeof(array)/sizeof(*array));
    //bubbleSort(array, sizeof(array)/sizeof(*array));
    //bubbleSort_2(array, sizeof(array)/sizeof(*array));
    //selectionSort(array, sizeof(array)/sizeof(*array));
    //selectionSort_2(array, sizeof(array)/sizeof(*array));
    //insertionSort(array, sizeof(array)/sizeof(*array));
    insertionSort_2(array, sizeof(array)/sizeof(*array));
    printArray(array,sizeof(array)/sizeof(*array));
    return 0;
}

void printArray(int array[], int lengthOfArray) {
    for (int i = 0; i < lengthOfArray; i++) {
        printf("%d\t",array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[], int lengthOfArray) {
    for (int i = lengthOfArray - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void bubbleSort_2(int array[], int lengthOfArray) {
    for (int i = lengthOfArray - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void selectionSort (int array[], int lengthOfArray) {
    for (int i = 0; i < lengthOfArray - 1; i++) {
        int min = i;
        for (int j = i + 1; j < lengthOfArray; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

void selectionSort_2(int array[], int lengthOfArray) {
    for (int i = 0; i < lengthOfArray - 1; i++) {
        int max = i;
        for (int j = i + 1; j < lengthOfArray; j++) {
            if (array[j] > array[max]) {
                max = j;
            }
        }
        int temp = array[i];
        array[i] = array[max];
        array[max] = temp;
    }
}

void insertionSort(int array[], int lengthOfArray) {
    for (int i = 1; i < lengthOfArray; i++) {
        int temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}

void insertionSort_2(int array[], int lengthOfArray) {
    for (int i = 1; i < lengthOfArray; i++) {
        int temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] < temp) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}
