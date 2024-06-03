#include<iostream>
using namespace std;




class Area{
private:
int length;
int breadth;


public:

// constructor to initialize the length and breadth
 Area(int l, int b){

    length = l;
    breadth = b;

 }

//function to return area
 int reactanglearea(){
 return length * breadth;

 }

};



int main(){
int l,b;
    cout << "enter length and breadth" << endl;
    cin >>l>>b;


Area rect(l,b);

cout << "area of rectangle is " << rect.reactanglearea() << endl;

return 0;

}