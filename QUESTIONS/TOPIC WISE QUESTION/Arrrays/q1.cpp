//* Find the Largest Element 
//*Bruteforce Solution
 

#include<iostream>
#include<algorithm>

using namespace std;


// * Printing the array 
void showArray( int arr[] ,int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//*input the array 

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main()
{


int  n;
cout<<"enter the size of array: ";
cin>>n;
int arr[n];

cout<<"Enter the elements of the array"<<endl;
inputArray(arr, 5);

//*sorting the Array
sort(arr, arr+n);

//* calling function to print the array
showArray(arr,n);
 
//*printing the largest element
cout<<"Largest Element is: "<<arr[n-1]<<endl;


    return 0;
}