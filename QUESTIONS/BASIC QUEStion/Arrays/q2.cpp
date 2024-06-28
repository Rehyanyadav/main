//* wap to sum of the element inside the array 



#include<iostream>
using namespace std;

void  printarray(int arr[], int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
        cout<<"enter the elements :";
        cin >> arr[i];

    }

    for (int i =0; i<n; i++){
        cout<<arr[i]<<" ";

        sum += arr[i];

    }
    cout<<"sum of array is :"<<endl;

 cout<<sum;


}
int main()
{
int n;
cout<<"Enter the size of array";
cin>>n;

    int arr[n];

printarray(arr,n);
    return 0;
}
