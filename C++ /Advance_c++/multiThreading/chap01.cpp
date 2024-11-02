//* Launching threads using Function Pointer 
/* A function pointer can be a callable object 
to pass to the std::thread constructor*/


#include<iostream>
#include <thread>
using namespace std;

void foo(int param) {
    // statement;
    cout << "Parameter value: " << param << endl;
}

int param = 10;
std::thread thread_obj(foo, param);


