//wap to display ap =1,3,5,7,9 upto n terms

#include<iostream>
using namespace std;
int main()
{

//methods number 1 nth term formula 
// aṉ =a+(n-1)d

int n;
cout<<"enter the number";
cin>>n;

// series is 1,3,5,7,9
for (int i=1; i<=2*n-1; i+=2){
  cout<<i<<endl;

}
    return 0;
}