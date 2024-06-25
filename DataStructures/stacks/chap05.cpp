//* STACK  USING LINKED LIST

#include <iostream>
using namespace std;
template<typename T>
class Node
{
T  data;
    Node<T> *next;

    Node(T data)
    {

        this->data = data;
        next = NULL;
    }
};
template <typename T>
class Stack
{
    Node<T> *head;
    T size; // number of elements present in the stack
public:
    Stack()
    {


    }
int getSize(){
}
bool isEmpty(){


}

void push (int element ){



}

T pop(){


}

T top(){

}


};