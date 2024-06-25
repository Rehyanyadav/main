//*TEMPLATE
//Pair with same data type 

#include <iostream>

using namespace std;

template <typename T>
class MyPair {
    T x;
    T y;
    
public:
    void setX(T x) {
        this->x = x;
    }

    T getX() {
        return x;
    }

    void setY(T y) {
        this->y = y;
    }

    T getY() {
        return y;
    }
};

int main() {
    MyPair<int> p1;
    p1.setX(20);
    p1.setY(30);
    cout << p1.getX() << "  " << p1.getY() << endl;

    MyPair<double> p2;
    p2.setX(100.24);
    p2.setY(34.6);
    cout << p2.getX() << " " << p2.getY() << endl;


    return 0;
}
