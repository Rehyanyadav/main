//*TEMPLATE
//*now PAIR have Different DATA TYPE

#include <iostream>
using namespace std;
template <typename T, typename V>

class MyPair {
    T x;
    V y;
    
public:
    void setX(T x) {
        this->x = x;
    }

    T getX() {
        return x;
    }

    void setY(V y) {
        this->y = y;
    }

    V getY() {
        return y;
    }
};

int main() {


 
MyPair<MyPair<int ,int > ,int >p2;
p2.setY(10);
MyPair<int,int >p4;
p4.setX(5);
p4.setY(6);
p2.setX(p4);

cout<<p2.getX().getX()<< p2.getY();

    return 0;
}
