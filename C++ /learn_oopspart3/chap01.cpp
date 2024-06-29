#include <iostream>
using namespace std;

class vehicle
{
private:
    int maxSpeed;  // cannot accessed outside the class

protected:
    int numTyres; //  only accessed by child class of vehicle

public:
    string color; // accessed by anyone outside the class
};


class Car: public vehicle{


};
int main()
{

    return 0;
}