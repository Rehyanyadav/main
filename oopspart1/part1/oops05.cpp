
/*

Default constructor 

*/

#include <iostream>

using namespace std;

//Class here 

class students
{
public:
    int rollnumber;

private :
    int age;


public:

//default constructor 
students(){
    cout <<"constructors called !"<<endl;

}
void display (){

    cout <<age << " "<<rollnumber << endl; 


}
//parameterize constructor 


students( int r ){
    cout <<"constructors  2 called !"<<endl;
    cout <<r <<endl;

          rollnumber = r; 
}


int getAge(){
    return age;
}


void setAge(int a , int passwords){

    if (passwords !=123){
        return;

    }
    if (a<0){
        return ;

    }

    age = a;
     students s1 ;
     students s2 ;

}
};

int main()
{
   students s1;
   s1 .display();


   students s2;
  

   students *s3 =new students;

   s3 -> display();

   cout<<"parameterize constructor demo"<<endl;

//    students s4;  // this only called the s4.students -> default
   students s4(10);

s4.display();



//  for dynamically objects

students *s5 = new students(101);

s5->display();




}
