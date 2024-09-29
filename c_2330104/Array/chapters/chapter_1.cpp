#include<stdio.h>
#include<stdlib.h>

int main (){
int size = 5;
int *arr = (int *)malloc(size*sizeof(int));
if (arr= NULL){

printf("Memory not allocated\n");
return 1;


}


for (int i =0;  i<size; i++){
arr[i] = i+1;   


}


    return 0;

}