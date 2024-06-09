#include<iostream>
using namespace std;

int search (int arr[], int n , int data){


for (int i =0; i<n; i++){
    if (arr[i] == data){
 return i;


    }


}
    return -1;
}

int main()
{

    int n ;
    cout<<"enter the size of array : ";
    cin >>n;
    //initializing the array
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>> arr[i]; // taking input in array 
    
}

int data;
cout<<" enter the data to be foudn out : ";
cin >>data;

int result = search (arr,n , data);
if (result != -1){
    cout<< "element found at index:" <<result <<endl;

}
else{
    cout <<"Element not found !!"<<endl;

}




    return 0;
}