
#include<iostream>
using namespace std;

int main()
{

 int n ;
 cin >>n;
 int prevnum= 1;
 int current_num =1;
 int sum = 0;

 for (int i = 1; i<=n;  i++){
    sum +=current_num;

    cout<<current_num<<endl;
    int next_num = prevnum+current_num;
    prevnum= current_num;
    current_num = next_num;
   


 }


cout<<"" <<sum;


    return 0;
}
