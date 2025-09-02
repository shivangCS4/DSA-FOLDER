#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative number not allowed\n");
    } else {
        printf("Factorial of %d = %d\n", n, factorial(n));
    }
    return 0;
}

