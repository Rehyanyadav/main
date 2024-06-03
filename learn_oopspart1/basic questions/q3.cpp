#include<iostream>
using namespace std;


class Rectangle{
 public:
    void Area_rectangle(int length, int breadth){
        int area = length * breadth;
        cout<<"Area of reactangle is "<<area<<endl;

    }
};



#include<iostream>
using namespace std;

int main()
{

Rectangle rect;


 rect.Area_rectangle(3,4);
 


    return 0;
}