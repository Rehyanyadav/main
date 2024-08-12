//*write programm in C to sort the dynamic array of n numbers
#include<stdio.h>
#include<stdlib.h>



void selectionsort(int arr[], int n){
for(int i =0; i<n-1; i++){

    int min = arr[i];
    int minIndex = i;
    for(int j =i+1; j<n; j++){
        
    }

}


}
int main(){

int n;
printf("Enter size : ");
scanf("%d",&n);

int *arr =(int *)malloc(n*sizeof(int));
   printf("enter elements: ");
for(int i =0; i<n; i++){

 
    scanf("%d",&arr[i]);


}
printf("The array is :");
for(int i =0; i<n; i++){

    printf(" %d\n",arr[i]);

}


//*sorting the array here !!

selectionsort(arr,n);
for(int i =0; i<n; i++){  
    printf("%d\n",arr[i]);      
}




    return 0;

}