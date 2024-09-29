#include<iostream>
#include<string>
using namespace std;
int main()
{

    string str ="hello";
    for (int i =0; i<str.size(); i++){
char ch = str[i];
cout<<"character at index "<<i<<" : "<<ch<<endl;


    }
    return 0;
}