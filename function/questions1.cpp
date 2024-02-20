#include<iostream>
using namespace std;
//wap to find combinations 
/* 
    n
     C    =  n! / r!*(n-r)!
      r
*/
int main()
{
    
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int r;

    int a = 1;
    cout<<"Enter a number :";
    cin>>r;

    for(int i = 1; i<=a; i++){
        a *= i;

    }

    int b = 1;
    for (int i = 1; i<=r; i++){
        b *= i;

    }

     int c = 1;
    for (int i = 1; i<=n-r; i++){
        c *= i;

    }

cout<< a/(b*c)<<endl;

}