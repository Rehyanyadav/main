//*write programm in C to sort the dynamic array of n numbers
#include <stdio.h>

void takeinput(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element of the array\n", i);
        scanf("%d", &arr[i]);
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
printf("name - Rehyan yadav\n");
printf("roll no-2330104\n");
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    takeinput(arr, n);
    printf("The array is\n");
    printarray(arr, n);
    bubbleSort(arr, n);
    printf("The array after sorting is\n");
    printarray(arr, n);

    return 0;
}