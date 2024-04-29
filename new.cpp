#include<iostream>
using namespace std;

double inchesToCentimeters(double inches){
   if (inches <0){
      cout <<"the no is nonnegative";
   return -1.0;
   }
else 
return 2.54*inches;

}
int main (){
cout <<inchesToCentimeters;

}