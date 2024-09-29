//*wap to search an element in  an array  linear search

#include<stdio.h>
#include<stdlib.h>

int main(){
printf("name - Rehyan yadav\n");
printf("roll no-2330104\n");
int n;
printf("Enter Size : ");
scanf("%d",&n);



//* dynamically allocating the array 
int *arr = (int *) malloc(n*sizeof(int));

 printf("Enter the element: ");
 for(int i =0; i<n; i++){
    
     scanf("%d",&arr[i]);

 }


//* printing the array
for(int i =0; i<n; i++){
    printf("%d\n",arr[i]);


}


//* applying the linear search 

int key;
printf("enter element to search :  ");
scanf("%d",&key);
for(int i =0; i<n; i++){

    if(arr[i]==key){
        printf("element found at index %d",i);
        break;
    }
}


    return 0;


}