

//* QUEUES USING ARRAYS

#include<iostream>
using namespace std;

template <class T>
class StackUsingArray{

    T *data;
    int nextIndex;
    int frontIndex;
    int size;
    int capacity;


//Constructor
    public:
    StacUsingArray( int s){
        data = new [capacity];
        nextIndex=0;
        frontIndex =-1;
        size= 0;
capacitY = s;
int GetSize(){

    return size;

}

int isEmpty(){
    if (size ==0){
    cout<<"Stack is empty"<<endl;
    }
}


//* inserting elements
void enqueue(element){
if (size == capacity){
cout<<"stack is full!!"<<endl;
return;
}

data[nextIndex] = element;
nextIndex = (nextIndex+1)%capacity;
if (frontIndex==-1){
    frontIndex = 0;

}

size++;
    }

T front(){
    if (size ==0){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    return data[frontIndex];
}

    }
};
