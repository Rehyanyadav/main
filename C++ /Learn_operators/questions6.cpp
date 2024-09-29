#include<iostream>
using namespace std;
int main()
{
    //wap to swap number without using third variables 

    int a = 2, b = 3;
    cout<<"Before swapping a="<<a<<endl<<"b="<<b<<endl;
    a = a+b;
    b= a-b;
    a=a-b;
    cout<<"After swapping a="<<a<<endl<<"b="<<b<<endl;

    return 0;
}