/*
* The "+"operator
It is used to calulate the strings

"alpha"+"codes"
= "alphacodes"

*/



#include<iostream>
#include<string>

using namespace std;
int main()
{

    string str1 = "alpha";
    string str2 = "codes";
str1+=str2;
cout <<str1<<endl;

cout <<str1+str2<<endl;

    return 0;
}
