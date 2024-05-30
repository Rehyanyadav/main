/*
take positive integer input and tell if it 
is even or odd


*/

#include<iostream>
using namespace std;
int main()
{

    int num;
    cout<<"Enter the number : ";
    cin>>num;
   
if (num%2==0){
       
       cout<<"the number is even";

}
else{

    cout<<"The number is odd";
    
}


    return 0;
}
