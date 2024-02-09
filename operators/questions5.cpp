#include<iostream>
using namespace std;
int main()
{
    //wap to swap a variable using third number 
    int a = 3, b = 2;
    cout<<"Before swapping a:"<<a<<endl<<"before swapping b:"<<b<<endl;
  int temp ;
  temp = a ;
  a = b;
  b = temp;
  cout<<"after swapping a and b is "<<a<<endl<<b;
      return 0;
}