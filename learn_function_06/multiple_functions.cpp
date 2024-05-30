#include<iostream>
using namespace std;

void usa(){
    cout<<"you are in usa";
    return;

}

void India(){
    cout<<"you are in india";
    usa ();


}
int main(){  

India();


    return 0;
    
}
