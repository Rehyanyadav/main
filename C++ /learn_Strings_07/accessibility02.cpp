#include<iostream>
#include<string>

using namespace std;
int main()
{
string str = "hello ";
char firstchar = str.at(    0);
char thirdchar =  str.at(2);
cout<<"firstchar :"<<firstchar<<endl;
cout<<"secondchar :"<<thirdchar<<endl;
str.at(0)  = 'j';

cout<<"modiefied string :"<<str<<endl;



    return 0;
}
