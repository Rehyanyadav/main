/* 
* BUBBLE SORT 
*/

#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for (int i  = 0; i<n; i++ ){
    cout<<arr[i];
    
}
}
void buublesort(int arr[],int n){

 for (int j = 0 ; j<n-1; j++ ){


// loop for 1 iteration
 
  for ( int i = 0 ; i<n-1; i++){
    if ( arr[i]> arr[i+1]){   
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
  }
 }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
for (int i = 0; i< n; i++){
    cin>> arr[i];
    
}
buublesort(arr, n );
printArray(arr,n);


    return 0;
}

