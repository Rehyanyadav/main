//* write a program to make a function which take input array from user  and print the largest and smalles element 

#include<stdio.h>


void takeinput(int arr[], int n ){

    for (int i = 0; i < n; i++)
{
    printf("Enter the %d element of the array\n",i);
    scanf("%d",&arr[i]);
}
}


void printarray(int arr[] , int n){
    for (int i = 0; i < n; i++)
{
    printf("The %d element of the array is %d\n",i,arr[i]);
}
}
int  largest(int arr[], int n){
    int max = arr[0];
    for (int i = 0; i < n; i++)
{
    if (arr[i]>max)
    {
        max = arr[i];
    }

}
return max;
}
int  smallest(int arr[], int n){
    int min = arr[0];
    for (int i = 0; i < n; i++)
{
    if (arr[i]<min)
    {
        min = arr[i];
    }
}
return min;
}
int main(){
int n;
printf("Enter the size of the array\n");
scanf("%d",&n);
int arr[n];
takeinput(arr,n);
printarray(arr,n);

//printing the largest element 
printf("The largest element of the array is %d\n",largest(arr,n));
printf("The smallest element of the array is %d\n",smallest(arr,n));
    return 0;

}
