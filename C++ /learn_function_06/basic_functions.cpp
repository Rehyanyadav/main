#include<iostream>
using namespace std;

void usa(){
    cout<<"you are in usa";
}

void India(){
    cout<<"you are in india";
}
//functions can called multiple times  with the same name 

int main(){  // main function only called once 

cout<<"you are in main "<<endl;

usa();
India();


    return 0;// kind of break line 
    
}
