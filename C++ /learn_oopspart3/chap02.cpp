//* Function overloading 


#include <iostream>
using namespace std;

class vehicle
{
private:
    int maxSpeed; // cannot accessed outside the class

protected:
    int numTyres; //  only accessed by child class of vehicle

public:
    string color; // accessed by anyone outside the class

    vehicle(){
        cout<<"Vehicle Constructor"<<endl;

    }
    void print (){
        cout<<"Vehicle"<<endl;


    }

    vehicle(int z){
        cout<<"Vehicle Constructor with value"<<z<<endl;
        maxSpeed = z;

    }
    ~vehicle(){
        cout<<"Vehicle Destructor"<<endl;
    }

};

class Car : public vehicle{
public:
    int numGears;

Car(){
    cout<<"Car Constructor"<<endl;  

}

~Car(){
    cout<<"Car Destructor"<<endl;
}

void print (){
cout<<"numtyres"<<numTyres<<endl;
cout<<"color"<<color<<endl;
cout<<"numGears"<<numGears<<endl;

}
};



class Truck: public vehicle{
    public:
    Truck(){

        cout<<"truck constructor "<<endl;

    }
};

class Bus : public Car, public Truck{

    public:

    Bus(){

        cout<<"bus Constructor"<<endl;

    }
};


int main (){


}