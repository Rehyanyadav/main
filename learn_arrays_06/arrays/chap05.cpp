/*

*SELECTION SORT 


*/



#include<iostream>
using namespace std;

void  selectionSort (int arr[], int n){
int minIndex = 0;


    //  find the min element in the array 
    int min =arr[0];
    for (int j = 1; j<n; j++){
        if (arr[j]<min){  // if the min is arr[j] 
            min =arr[j]; // then update the min element 
        }
    }
/*

*SWAPPING HERE 

*/
int temp = arr[0];
arr[0] =  arr [minIndex]; 
arr[minIndex] = temp;


}
int main()
{
    
    return 0;
}