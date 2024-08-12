//* find the smallest elemet of the array  in c 


#include<stdio.h>

int main (){


int arr[5]={1,2,3,4,5};

    int min = arr[0];
    for(int i =0; i<5; i++){
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }

printf("The smallest element of the array is %d",min);

    return 0;

}