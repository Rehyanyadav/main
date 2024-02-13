//wap to check whether a year is leap year or not 

#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter the year :";
cin >> year;
if (year%4==0){
      cout <<"the year is leap year";

}
else {
    cout<<"this is not leap year";
}
    return 0;
}