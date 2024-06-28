#include<iostream>
using namespace std;



class Inputs{
    public:
    int length, breadth , height, radius ;
    void func(int a , int b){
        this ->length = a;
        this ->breadth  = b;

    }

    void func(  int r)
        {
            radius = r;
        }

void func (int a, int b , int c ){
    length = a;
    breadth = b;
    height = c;
}
};


class Rectangle : public Inputs{
    public:
    int area(){
        return length * breadth;
    }
};


class Circle : public Inputs{
    public:
    int area(){
 return 22*7;
    }
};


class Volume : public Inputs{
    public:
int area(){
        return length * breadth * height;
    }
};

int choice(){
    int n;
    cin>> n;
    return n;

}