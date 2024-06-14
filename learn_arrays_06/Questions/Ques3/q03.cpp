//* CHECK IF  ENTERED ARRAY IS SORTED OR NOT

#include<iostream>
using namespace std;


// we have true and false return type so we use bool 
bool  sorted (int arr[], int n ){  
for(int i  = 0; i<n; i++){
    if (arr[i]>= arr[i-1]){ //checking that the  array is greater than the element i-1

    }
    else {
 return false;

    }
}
return true;
}

int main()
{
int n ;
cout<<"Enter the size of array";
cin >>n;
int arr[n]; // initialisation of array
for (int i = 0; i<n; i++){
     cin >>arr[i];  // taking input element in array 

}
//calling function
cout <<sorted (arr,n);
    return 0;
}