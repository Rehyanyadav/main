
//* PRINT N TO 1
#include<iostream>
using namespace std;
void  print(int n,int current = 1){
 if (current >1){  // base case 
        return;
    }
cout<<n <<" ";
    print(n,current+1);

}
int main()
{
int n;
cin>>n;


    return 0;
}