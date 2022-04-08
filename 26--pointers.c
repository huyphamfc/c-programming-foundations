#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int* P = &x;
    int** Q = &P;
    int*** R = &Q;

    printf("%d\n",*P); // 5
    printf("%d\n",*Q); // 225 - address's pointer (P)
    printf("%d\n",*R); // 215 - address's pointer (Q)

    printf("%d\n",*(*Q)); // 5

    printf("x's address: %d\n",&x);
    printf("x's value: %d\n",x);
    printf("\n");

    printf("P's initialize address: %d\n",&P);
    printf("P's address: %d\n",P);
    printf("P's value: %d\n",*P);
    printf("\n");

    printf("Q's initialize address: %d\n",&Q);
    printf("Q's address: %d\n",Q);
    printf("Q's value: %d\n",*Q);
    printf("\n");

    printf("R's initialize address: %d\n",&R);
    printf("R's address: %d\n",R);
    printf("R's value: %d\n",*R);
    printf("\n");

    increment(&x);
    printf("Value of x is %d\n",x);

    int array[5] = { 2, 5, 3, 4, 1};
    int *G;
    G = array;
    printf("Address of array[0]: %d\n",&array[0]);
    printf("Address of array[0]: %d\n",G); // base address
    printf("Value of array[0]: %d\n",array[0]);
    printf("Value of array[0]: %d\n",*G);
    printf("============================================\n");
    int i = 0;
    for (int i = 0; i < (sizeof(array)/sizeof(*array)); i++) {
        printf("Address of array[%d]= %d\n",i,(G + i));
        printf("Value of array[%d]= %d\n",i,*(G + i));
        printf("\n");
    }

    doubleArray(array,(sizeof(array)/sizeof(*array)));
    printArray(array,(sizeof(array)/sizeof(*array)));

    char C[4];
    C[0] = 'H';
    C[1] = 'U';
    C[2] = 'Y';
    C[3] = '\0';
    printf("%s\n",C);

    char D[] = "HUY";
    printf("%s\n",D);
    int lengthOfString = strlen(D);
    printf("Length of string: %d\n",lengthOfString); // 3
    printf("Size of string: %d\n",sizeof(D)); // 4

    return 0;
}

void increment(int *P) {
    *P = *P + 1;
}

void doubleArray(int* array, int lengthOfArray) {
    for (int i = 0; i < lengthOfArray; i++) {
        array[i] *= 2;
    }
}

void printArray(int* array, int lengthOfArray) {
    for (int i = 0; i < lengthOfArray; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
}