#include<iostream>
using namespace std; 
class  students{
  int name ;
  int age ;


};
//class made in same code  but sepeately  
  
// this file creating objects 
int main()
{
 //creating objects statically 

    students s1;
    students s2;


    students s3, s4,s5;


//creating objects dynamically

     students *s6 = new students;


   return 0;
}


