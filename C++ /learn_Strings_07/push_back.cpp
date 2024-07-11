#include<iostream>
#include<string>
using namespace std;
int main()
{

    string str = "hello";

    cout<<"before push back : "<<str<<endl;
    str.push_back('!');
    cout<<"after push back : "<<str<<endl;

    return 0;
}