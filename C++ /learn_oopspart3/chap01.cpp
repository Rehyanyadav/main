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
};

class Car : public vehicle
{
public:
    int numGears;

    void print()
    {
        cout << "numtyres" << numTyres << endl;
        cout << "color" << color << endl;
        cout << "numGears" << numGears << endl;
        // cout<<"maxSpeed prperty"<<maxspeed<<endl;

    }
};
int main()
{


vehicle v;
v.color="blue";
// v.maxSpeed  = 100; //* this will show error because it is private
// v.numTyres = 4; // this Will show error because it is only available for CAR class 
Car c;
c.color = "black";
// c.numTyres = 4;  // * not Accessible 
c.numGears = 5;


    return 0;
}