//*WAP to find out the sum of the numbers stored in an array of integers.
#include<stdio.h>
int main(){

    int n;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :");
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i =0; i<n; i++){
        printf("The element of the array is : %d\n",arr[i]);

    }

    printf("the sum of the element of the array is :");
int sum = 0;
for(int i = 0; i < n; i++){
    sum += arr[i];
}
printf("%d\n", sum);



}
