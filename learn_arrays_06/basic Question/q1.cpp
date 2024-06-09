/*
*Reverse an array with user input size and user input element

*/


#include<iostream>
using namespace std;

void reverse(int arr[], int len){
    for (int i = 0; i<len/2; i++){
      

     swap(arr[i], arr[len-i-1]);
    }
}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>> arr[i];

    }
 reverse (arr,n);
 for (int  i = 0; i<n; i++){
    cout <<arr[i]<<" ";
 }
    return 0;
}