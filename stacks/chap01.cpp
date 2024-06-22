//* CREATING STACKS 
#include<iostream>
#include<climits>
using namespace std;

class StackusingArray{
    private: 
     int *data; //creating  pointer data
int nextIndex;
int capacity;
public:
StackusingArray(int totalsize){
data = new int[totalsize];
nextIndex = 0;
capacity = totalsize; // intitialzie capacity
}
// creating function for  return the number of elements present in stack 
int size (){
    return nextIndex;
}
bool isEmpty(){
    // if (nextIndex == 0){
    //     return true;
    // }
    // else {
    //     return false;

    // }
//short of this if else

    return nextIndex == 0;
}
//*inserting next element 

void push(int element){
    if (nextIndex == capacity){
        cout<<"stack full"<<endl;
        return;
    }

 data[nextIndex] = element;
 nextIndex++;

}

//* deleting element 
int pop(){
    if (isEmpty()){
        cout<<"stack is full"<<endl;
        return INT_MIN;

    }
    nextIndex--;
    return data[nextIndex];

}

//*  top function 


int top(){
      if (isEmpty()){
        cout<<"stack is full"<<endl;
        return INT_MIN;

    }
    return data[nextIndex- 1];

}

};
int main(){
StackusingArray s(4);
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.size()<<endl;
cout<<s.isEmpty()<<endl;
}