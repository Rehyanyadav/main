#include<iostream>
using namespace std;


int length(char arr[]){
  int count = 0;
  for (int i = 0;  arr[i]!= 0; i++ ){
    count ++;

  }

  return count ;

}

int main()
{

char arr[100];
int name ;
cout<<"Enter your Name : ";

cin >>arr;

cout <<"Length is : " << length(arr)<<endl;
/*

this is  the code of find the length of the 
string in character array 
so here is the cpde !!


*/




    return 0;
}