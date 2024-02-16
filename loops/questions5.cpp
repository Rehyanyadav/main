#include<iostream>
using namespace std;
int main()
{
    // print the table of 19

//1st method
    // for (int i=19; i<=190; i++){
    //     if (i%19==0){
    //         cout<<i<<endl;

    //     }
    // }

//second method 
for(int i = 19; i<=190; i+=19){
    cout<<i<<endl;
    
}
    return 0;
}