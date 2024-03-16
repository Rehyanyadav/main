#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.");
        return 0;
    }

    do {
        if (n % i == 0) {
            if (i != n) {
                sum += i;
            }
        }
        i++;
    } while (i <= n / 2);

    if (sum == n) {
        printf("%d is a perfect number.", n);
    } else {
        printf("%d is not a perfect number.", n);
    }

    return 0;
}