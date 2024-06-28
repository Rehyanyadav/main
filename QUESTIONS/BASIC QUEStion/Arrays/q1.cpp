//* wap to create an array that can store 50 int and display content 



#include<iostream>
using namespace std;

void printarray(int arr[], int n){
 
 for (int i = 0; i<n; i++){
cin>>arr[i];

 }
 
 for (int i =0; i<n; i++){
    cout<<arr[i];
 }
}
int main()
{
int n;
cout <<"enter the number";
cin>>n;

    int arr[n];


printarray(arr,n);

    return 0;
}
