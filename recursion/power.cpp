#include<iostream>
using namespace std;

int power(int n){

    //base case 
    if (n ==0)
        return 1;
  //recursive relation 

  int smalleer = power (n-1);
  int bigger = 2*smalleer; 

return bigger;


}
int main()
{


    int n;
    cin>>n;
    int ans = power(n);
    cout <<ans;

    return 0;
}