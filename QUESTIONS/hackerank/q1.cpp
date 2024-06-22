/*
read the data types from the users and 
print each value on anew line with specified precision



*/


#include<iostream>
#include<iomanip>
#include<cmath>
#include<limits>

using namespace std;
int main()
{


     int i ;
     long l;
     char c;
     float f;
     double d;
     

     cin>>i>>l>>f>>d;
     cout << i <<endl;;
     cout << l <<endl;
     cout <<fixed << setprecision(3)<<f <<endl;
     cout << d <<endl;

     
    return 0;
}