#include<iostream>
using namespace std;

class truck;

class Bus {
public:
    void print();
};

class truck {
private:
    int x;
protected:
    int y;
public:
    int z;
    friend class Bus;  // bus class declared as friend class
    friend void test(); // test function declared as friend function
};

void Bus::print() {
    truck t;
    t.x = 10;
    t.y = 20;
    cout << t.x << " " << t.y << endl;
}

void test() {
    truck t;
    t.x = 10;
    t.y = 20;
    cout << t.x << " " << t.y << endl;
}

int main() {
    Bus b;
    b.print();
    test();

    return 0;
}