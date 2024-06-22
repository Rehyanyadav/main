#include<iostream>
using namespace std;




int binary_search(int arr[], int inputsize, int findnumber ){

    int start =0; int end = inputsize-1;

    while (start <=end){
        int mid =(start +end)/2;
        if(arr[mid]==findnumber){
            return mid;


        }

        else if (findnumber<arr[mid]){
            end =mid-1;
        }
        else if (findnumber>arr[mid]){
            start =mid+1;
        }



    }
    return -1;
}


int main (){


    int n; 
    cout<<"input size of array";
    cin >>n;

    int value [100];
    for (int i =0; i<n; i++){

cout <<"enter the array values";

        cin >> value [i];
        
    }
    int findnumber ;

cout << " enter the number to be found";

    cin >> findnumber; ;
    cout <<binary_search(value,n,findnumber)<<endl;
}