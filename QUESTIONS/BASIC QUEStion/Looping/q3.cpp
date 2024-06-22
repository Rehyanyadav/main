//*wap to find the factorial of a given number

#include<iostream>
using namespace std;

int factorial (int num){
int result = 1;
    for (int i =1; i<num; i++){
 result *= i; //multiply result by  i;
    }
    return result;

}
int main()
{


    int num;
    cout<<"enter the number";

    cin>>num;

    if(num<0){
        cout<<" error negative number";

    }
    else{
       cout<< "factorial of num "<<factorial (num);

    }
    return 0;
}
