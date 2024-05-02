#include<iostream>
 using namespace std;
 int main (){

    int n ;
    cin >>n;
    int a = 0;
    int b = 1;
    for (int i = 0; i<=1; i++){
        int nextnumber = a+b;
        cout<<nextnumber<<endl;
        a =b;
        b = nextnumber;
        
    }
 }