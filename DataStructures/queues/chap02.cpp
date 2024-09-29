#include<iostream>
using namespace std;
#define n 20

class Queue {
    int *arr;
    int front;
    int back;
    public:
    Queue(){

        arr = new int[n];
        front =-1;
        back= -1;
    }

    void push (int x){
       
if (back== n-1){
    cout<<"stack is overflow";
    return;
}
back++;

    arr[back]= x;
if (front = -1){
    front++;

}
    }


    void pop(){

    if(front ==-1  || front>back){
 cout<<"no element";
 return ;

    }
front ++;


}


void peek (){

}

};

int main()
{
    return 0;
}