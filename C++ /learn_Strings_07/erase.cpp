#include<string>
#include<iostream>
using namespace std;
int main()
{

    string str1 = "hello ";
    cout<<"after erase : "<<str1<<endl;
    cout<<"after erase : "<<str1<<endl;
    str1.erase(1,2); 
    cout<<"after erase : "<<str1<<endl;
    str1.erase(1);

    cout<<"after erase : "<<str1<<endl;

    return 0;
}