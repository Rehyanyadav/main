//*WAP to display the array elements in ascending order.

#include<stdio.h>
int main(){


    int n;
printf("Enter the size of the array :");
scanf("%d",&n);
int arr[n];
printf("Enter the element of the array :");
for(int i = 0; i<n; i++){
    scanf("%d",&arr[i]);

}
for(int i =0; i<n; i++){
    printf("%d", arr[i]);

}

printf("after arranging in ascending order :");
// Sort the array in ascending order
for(int i = 0; i < n-1; i++) {
    for(int j = 0; j < n-i-1; j++) {
        if(arr[j] > arr[j+1]) {
            // Swap arr[j] and arr[j+1]
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}



// Print the array in ascending order
for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}


}