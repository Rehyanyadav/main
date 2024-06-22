#include<iostream>
using namespace std;


int main()
{
       int a =5, b=4, c=0;
       if(a && b)
           cout<<a+b<<" ";
       if((a && c) || c)
           cout<<a * b<<" ";
       if(a || c )
           cout<<b+c;


}
