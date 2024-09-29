#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str1 = "hello ";
cout<<"before pop_back : "<<str1<<endl;
str1.pop_back();
cout<<"after pop_back : "<<str1<<endl;
    return 0;
}