#include<iostream>
using namespace std;


int printarray(int arr[],int size ){


   //print array  
   
    for(int i =0; i<size; i++){
        cout <<arr[i]<<" ";

    }
    cout<<"printing  done"<<endl;

}
int main(){
//array with functions 



    int n;
    cin>>n;
    int third[15]={0,1,2,3,4,5,6,7,8,9};
    

   printarray(third, 15);
}