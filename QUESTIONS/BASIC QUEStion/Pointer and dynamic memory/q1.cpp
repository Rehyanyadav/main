//*wap to swap two numbers using call by refrence 

#include<iostream>
using namespace std;
void swap(int &x ,int &y){
    int temp = x;
    x = y;
    y = temp;

}
int main()
{

int x = 23;
int y = 24;
cout<<"Befor Swapping"<<endl;
cout<<x<<endl<<y<<endl;
cout<<"after swapping"<<endl;

swap (x,y);
cout<<x<<endl<<y;



    return 0;
}