/*
*substr()

It is used to find the substring of a given string 
it is used to find the particular part of the string

example -: we have to find the  "hel"  in "hello" string 

*SYNTAX
substr(positon,length)

*USING 

varibale_name.substr(0,3) -> "hel"
*/



#include<iostream>
using namespace std;
int main()
{

 string str01 = "survive";
 cout <<str01.substr(0,3)<<endl;
 cout <<str01.substr(3);

// * TIME COMPLEXITY  - O(LENGHT)

    return 0;
}