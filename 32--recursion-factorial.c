#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(int n) {
    printf("Calculate f(%d)\n", n);
    if (n == 0) return 1;
    int f = n * calculateFactorial(n - 1);
    printf("f(%d) = %d\n", n, f);
    return f;
}

int main() {
    int n;
    int factorialOfN;
    printf("Enter n (n>=0): ");
    scanf("%d", &n);
    factorialOfN = calculateFactorial(n);
    printf("Factorial of %d is %d\n", n, factorialOfN);
    return 0;
}