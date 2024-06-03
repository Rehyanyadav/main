/*
Write a program that would print the information
 (name, year of joining, salary, address) 
 of three employees by creating a class named 'Employee'. 
 The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat

*/


#include<iostream>
using namespace std;
#include<string>


class Employee{
private:
 string name;
 int joining;
 string address;

public:
//constructor to initialize name ,joining ,and address
 Employee(string n,int j, string a){


    name = n;
    joining = j;
    address = a;

 }


void printEmployeesinfo(){

cout <<"name" << " " << "joining" << " " << "address ";
cout <<name<<"\t\t"<<joining<<"\t\t"<<address;



}


};

int main (){
    // Create objects of class Employee
    Employee e1("Robert", 1994, "64C- WallsStreat");
    Employee e2("Sam", 2000, "68D- WallsStreat");
    Employee e3("John", 1999, "26B- WallsStreat");

    e1.printEmployeesinfo();
    e2.printEmployeesinfo();
    e3.printEmployeesinfo();


}
