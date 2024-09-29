#include<iostream>
using namespace std;


int factorial (int n ){
 if (n ==0){
    return 1;
 }
int smalloutput = factorial (n-1);

int output = n*(smalloutput);
return output;
}

int main()
{

cout<<factorial(4);

    return 0;
}