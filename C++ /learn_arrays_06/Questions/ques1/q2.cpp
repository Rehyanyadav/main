//* FIND the Largest Element

#include<iostream>
using namespace std;


//taking element input 
void input(int arr[], int n ){
    for (int i =0; i<n; i++){
        cin>>arr[i];
    }

}

// finding the largest element 
int largest(int arr[], int n){
   int largest = arr[0];
   for (int i = 0; i<n; i++){
    if (arr[i]>largest){
        largest = arr[i];
    }
   }

    return largest;

   
}


int main()
{

    int n;
    cout<<"Enter the size ";
    cin>>n; // get the size of the array from the user
 
    int arr[n]; // declare the array with the given size

    input(arr,n); // input the elements of the array
    cout << "Largest element is: " << largest(arr,n); // print the largest element
    return 0;
}