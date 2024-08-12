//*wap in c with user input number and find the factorial with recursion 

#include <stdio.h>

// Function to calculate factorial using recursion
long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter The number : ");
    scanf("%d", &num);

    if (num < 0)
        printf("Error! Factorial of negative number doesn't exist.");
    else {
        long fact = factorial(num);
        printf("Factorial of %d = %ld\n", num, fact);
    }

    return 0;
}