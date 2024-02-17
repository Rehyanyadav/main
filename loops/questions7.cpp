//display the gp  1,2,4,8,16,32 .. upto n 
//geometric progression 
// if the gap to two no is multiplied by same number is called GP 
#include<iostream>
using namespace std;
int main()
{

    //1,2,4,8,10
    int n;
    cout<<"enter no :";
    
    cin>>n;
    int a =1;
    for(int i =1; i<=n; i++){
        cout<<a<<endl;
 a = a*2;

    }

    return 0;
}
