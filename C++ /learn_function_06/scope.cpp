#include<iostream>
using namespace std;

//This is the global variables 
int global =5;


//main functions 

int main()

{

    //examples of local variables 
    //this is local variables 
    int global =2;
    cout<<global<<endl;
    return 0;
}
/*
There are mainly two types of scopes
1) globle scopes
>They are available through out the life time of program 
>They declare at the top of the program outside all of the functions or blocks 
>Declaring Global variables : Globla Variables are usually 
declared outside the of the program.they can access any portion of the program 



2)Local Scopes 
>Anything inside the {  and } to inside the block.
>Local variables do not exist outside the block in which they are declared
>declaring local variables are inside the block
*/
