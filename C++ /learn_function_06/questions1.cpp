#include<iostream>
using namespace std;
//wap to find combinations 
/* 
    n
     C    =  n! / r!*(n-r)!
      r
*/


int fact(int x){
    int f = 1;
    for (int i = 1; i<=x; i++) {
        f *=i;
        return f;

    }
}
int main()
{
    
    int n;
cout<<"Enter the n:";
cin>>n;
int r;
cout<<"Enter the r:";
cin>>r;
int a = fact (n);
int b = fact (r);
int c = fact (n-r);
cout<<a/(b*c);


}