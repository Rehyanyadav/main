//* Run Time polymorphism

#include<iostream>
using namespace std;



class Vehicle {
    public:
string Color;

    void print (){
        cout<<"vehicle "<<endl; 

    }
};




class car : public Vehicle{
    public:
    int numGears;


virtual void print (){
        cout<<"car "<<endl;

    }
};


int main (){


    Vehicle  v;
    car c;

    v.print(); //* in this situation vehicle class print function called
    c.print(); //* in this situation car class print function called
 Vehicle  * v1= new Vehicle;
 Vehicle *v2;
//  v2  =&v;

// v2= &c;
v1 -> print();
v2->print();
    
        return 0;




 

}