#include<iostream>
using namespace std;


void  selection(int arr[], int n){
 
 for(int i = 0; i<n-1; i++)
 {
//finding  the minimum array
int min = arr[i];

 int minIndex =i;
for(int j = i+1; j<n; j++){
    if (arr[j]<min){
        min =  arr[j];
        minIndex = j;
         

    }}


//  now we swap the minimum
int temp = arr[i];
arr[i]= arr[minIndex];
arr[minIndex] = temp;
 

 }

}
int main()
{

int arr[] = {3,1,6,9,0,4};
selection(arr, 6);
 for (int i = 0; i<6; i++){
    cout <<arr[i]<<" " <<endl;


 }


cout<<endl;

}