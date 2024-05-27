#include<iostream>
using namespace std;

class students {

    public :
    int roll;
    private : 
    int age ;


    public:

    students (int roll) {
        cout << "constructor 2 called" << endl;
        this -> roll = roll;
    }

    students (int a, int r) {
        cout << "this : " << this << endl;
        cout << "constructor 3 called ! " << endl;
        this -> age = a;
        this -> roll = r;
    }

    students(const students& s) {
        cout << "copy constructor called" << endl;
        this -> age = s.age;
        this -> roll = s.roll;
    }
};


int main()
{
    students s1(10, 1001);
    cout << "s1" << endl;
    s1.display();

    students s2(s1);
    cout << "s2 :" << endl;
    s2.display();

    return 0;
}