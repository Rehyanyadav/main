#include<iostream>
#include<string>

using namespace std;
int main()
{
string str = "hello ";
char firstchar = str[0];
char thirdchar = str[2];
cout<<"firstchar :"<<firstchar<<endl;
cout<<"secondchar :"<<thirdchar<<endl;
str[0]  = 'j';

cout<<"modiefied string :"<<str<<endl;



    return 0;
}
