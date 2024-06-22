//*wap to find the  sum of digit of a given number


#include<iostream>
using namespace std;
int sumofdigit (int num){
    int sum = 0 ;
    while(num != 0){
        sum += num%10;
        num /= 10;

    }
    return sum;


}
int main()
{

    int num;
    cout<<"enter the number ";
    cin >>num;

    int result = sumofdigit(num);
    cout<<result;


    return 0;
}