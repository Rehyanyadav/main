/*

if else is used for use in situation dependent 
case.

*/

#include<iostream>
using namespace std;
int main()
{
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
    


    //short hand if else

int time1 = 20;
string result = (time1<18)? "good day":"good evening";

    return 0;
}