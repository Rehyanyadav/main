#include<iostream>
using namespace std;
class students{


int age ;
char *name;

public:

students(int age , char *name){
    this -> age = age ;
    this -> name = name;
 //shallow copy 
//  this -> name = name ;

//deep copy 
this -> name = new char [strlen (name+1)];
strcpy (this -> name,name);

}

   void display(){
        cout <<name <<" "<< age << endl;
    
   }


};



#include<iostream>
using namespace std;
int main()
{
    char name [] = "abcd";

    students s1(10,name);
   s1.display();

name [3] ='e';

   students s2(23,name);
   s2.display();
    return 0;
}