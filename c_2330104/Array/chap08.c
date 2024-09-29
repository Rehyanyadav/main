/*
Given an unsorted dynamic array of size n, 
WAP to find and display the number of
elements between two elements a and b (both inclusive). 
E.g. Input : arr = [1, 2, 2, 7, 5,4],
 a=2 and b=5, Output : 4 and the numbers are: 2, 2, 5, 4.
 write code in C language.

*/
#include <stdio.h>
#include <stdlib.h>

int count_elements_between(int arr[], int n, int a, int b) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= a && arr[i] <= b) {
            count++;
        }
    }
    return count;
}

void print_elements_between(int arr[], int n, int a, int b) {
    printf("The numbers between %d and %d are: ", a, b);
    for (int i = 0; i < n; i++) {
        if (arr[i] >= a && arr[i] <= b) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
printf("name - Rehyan yadav\n");
printf("roll no-2330104\n");
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a, b;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    int count = count_elements_between(arr, n, a, b);
    printf("The number of elements between %d and %d is: %d\n", a, b, count);
    print_elements_between(arr, n, a, b);

    free(arr);
    return 0;
}