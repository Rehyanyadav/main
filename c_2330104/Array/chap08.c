/*
Given an unsorted dynamic array of size n, 
WAP to find and display the number of
elements between two elements a and b (both inclusive). 
E.g. Input : arr = [1, 2, 2, 7, 5,4],
 a=2 and b=5, Output : 4 and the numbers are: 2, 2, 5, 4.
 write code in C language.

*/

#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
 
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a, b;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    int count = 0;

    printf("Input: arr = [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("a = %d, b = %d\n", a, b);

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] >= a && arr[i] <= b) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    
    printf("\n");
    printf("Number of elements between %d and %d (inclusive): %d\n", a, b, count);
    free(arr);

    return 0;
}

