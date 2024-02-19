//wap to check if a number is composite or not
// if number has extra factors texcept a and n

#include<iostream>
using namespace std;
int main()
{
int n ;
cout<<"Enter the number :";
cin>>n;
for (int i = 2; i>=n/2; i--){
    if (n%i == 0){
        cout<<"composite";
        break; // to get our of the loop


    }
}

    return 0;
}