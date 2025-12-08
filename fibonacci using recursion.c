#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;        // Base case 1
    else if (n == 1)
        return 1;        // Base case 2
    else
        return fib(n - 1) + fib(n - 2);   // Recursive step
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
