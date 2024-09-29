#include<iostream>
using namespace std;

bool palindrome(int n){
    
    
int c , sum =0, remainder = 0;
c = n;
while(n>0){
     remainder = n%10;
     sum = sum * 10 + remainder; // correct way to build the reversed number
    n= n/10;
}
if (c==sum){
    return true;

}
else{
    return false;

}


}
int main (){

int n;
cin>>n;

cout<<palindrome(n)<<endl;

     return 0;
}