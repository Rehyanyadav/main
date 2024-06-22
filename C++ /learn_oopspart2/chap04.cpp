#include<iostream>
using namespace std;


class student {
  public:
  int rollno; // non static 
  int age; // non static

  static int totalstudent; // total number of students

};


/*

*Now because of static totalstudents students have only
*roll no and age  and class have the totalstudents


*/
int main (){
student s1;
s1.rollno = 0;
s1.age =20;

cout << s1.age << endl;

return 0;


}