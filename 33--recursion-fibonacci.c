#include <stdio.h>
#include <stdlib.h>

// Fibonacci 0 1 1 2 3 5 8 13

int calculateFibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
}

int main() {
    int n = 10;
    printf("Fibonacci %dth is %d", n, calculateFibonacci(n));
    return 0;
}