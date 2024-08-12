//*write a programm in c to reverse an dynamic array of n number 

#include <stdio.h>
#include<stdlib.h>


void reverseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}



int main()
{

    //* Entering the size of the array 
    int n;
    printf("enter the size of the array :");

    scanf(" %d", &n);

//* making the array dynamically
    int *arr = (int *)malloc(n * sizeof(int));
    
 for(int i =0; i<n; i++){
    printf("enter the element %d :",i);
    scanf("%d", &arr[i]);
 }


//* printing the array 
for(int i =0; i<n; i++){
    printf("%d\n", arr[i]);
}
 
 
    reverseArray(arr, 0, n - 1);
    printf("Reversed array is \n");
   for(int i =0; i<n; i++){
    printf("%d\n", arr[i]);

   }
    return 0;
}
