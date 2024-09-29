//* insertion an element at ith position in an array  using dynamic array 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, pos, element;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }
    
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    
    // Shift elements to the right
    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    
    // Insert the element at the given position
    arr[pos] = element;
    
    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    
    return 0;
}

