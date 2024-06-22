#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>  arr[3];
    for (int i = 0; i<3;i++){
        arr[i].resize(5);  //*Resizing of vector array
    }
    for (int i = 0; i<3; i++){
        cout<<arr[i].size()<<" ";

    }
    return 0;
}