
#include<iostream>
#include<climits>
using namespace std;

class stacksUsingArray{
    int *data;
int nextIndex;
    int capacity;

public:
stacksUsingArray(){
   data = new int[4]; //*Intitally declared with a small size of 4
   nextIndex = 0;
   capacity = 4;

}

//*Returning the number of elements present in stack
int size (){
    return nextIndex;

}

bool isEmpty(){
    return  nextIndex == 0;

}

//*INSERTING ELEMENT
void push (int element){
    if (nextIndex == capacity){  //*checking the nextIndex is equal to capacity or not
    //*if yes then double the capacity
    int *newdata = new int  [2*capacity];
    for (int i = 0 ; i<capacity ; i++){
        newdata[i] = data[i]; //*copying element

    }
capacity *=2;
delete[]data;
data = newdata;
    }
    data[nextIndex] = element;
nextIndex++;
}

//*DELETING ELEMENT
int pop(){
    if (isEmpty){
        cout<<"stack is empty"<<endl;
        return INT_MIN;

    }
    nextIndex --;
    return data[nextIndex];

}
//*  top function accessing the top element 
int top(){
      if (isEmpty()){
        cout<<"stack is full"<<endl;
        return INT_MIN;

    }
    return data[nextIndex- 1];

}

};


int main (){

stacksUsingArray s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.size()<<endl;
cout<<s.isEmpty()<<endl;
    return 0;

}