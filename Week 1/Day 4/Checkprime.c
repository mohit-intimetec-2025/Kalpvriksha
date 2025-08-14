#include <stdio.h>

void main() {
    int num, i, isPrime = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a prime number");
        return;
    }

    if (num == 2) {
        printf("Prime Number");
        return;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Not a prime number");
            return;
        }
    }

    printf("Prime Number");
}
