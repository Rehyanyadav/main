#include<iostream>
using namespace std;


class BaseClass{

public:
int var_base;
void display(){
    cout<<"Displaying Base class variable var"<<var_base<<endl;
}

};


class DerivedClass: public BaseClass{

public:
int var_derived ;
void display(){
        cout<<"Displaying Base class variable var"<<var_base<<endl;
    cout<<"Displaying derived  class variable var"<<var_derived<<endl;

}


};

int main()
{

    BaseClass *base_class_ptr;
BaseClass base_obj;
DerivedClass derived_obj;
base_class_ptr = &derived_obj; //pointing base class pointer to derived class


base_class_ptr->var_base = 34;
base_class_ptr->display();


    return 0;
}