#include<iostream>
using namespace std;
int main()
{
int x = 12;
int *ptr = &x;
cout<<x<<endl;
//  x= 7;
//  cout<<x;

//without x 
    *ptr = 23;
    cout<<x;
    
    
    
        return 0;
}