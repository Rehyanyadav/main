#include<stdio.h>

void takeinput(int arr[], int n ){

    for (int i = 0; i<n; i++){
        printf("Enter the %d element",i);
        scanf("%d",&arr[i]);
    }
}

void printarray(int arr[] , int n){
    for (int i = 0; i<n; i++){
        printf("%d",arr[i]);
    }
}

void findlargestsamllest(int arr[], int n){
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i<n; i++){
        if (arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("largest element  %d\n",max);
    printf("smallest element  %d\n",min);
}

int main(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    takeinput(arr,n);
    printarray(arr,n);
    findlargestsamllest(arr,n);
    return 0;
}