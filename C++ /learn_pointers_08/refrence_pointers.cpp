#include<iostream>

using namespace std;


// Call by value
void fun1(int a)
{
a=20;
}
//Call-By-Reference with a Reference Argument
void fun2(int &b)
{
b=20;
}
//Call-By-Reference with a Pointer Argument
void fun3(int *b)
{
*b=30;
}
int main()

{
int var =10;

fun1(var);
cout<<"Value of variable var: "<<var<<endl;

fun2(var);
cout<<"Value of variable var: "<<var<<endl;

fun3(&var);
cout<<"Value of variable var: "<<var<<endl;




return 0;

}