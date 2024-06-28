//* QUEUES using ARRAY

#include<iostream>
using namespace std;
template<typename T>

class Queues {
 T *data;
 int nextIndex;
 int firstIndex;
 int size ;
 int capacity;

public:
    Queues(int s){
        data = new T [s];
        nextIndex  = 0;
        firstIndex = 0;
        size = 0;
        capacity = s;
    }

    int GetSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    void enqueue(T element ){
        if(size == capacity){
            cout<<"Queue is full"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if(firstIndex == -1){
            firstIndex = 0;
        }
        size++;
    }

    T dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return T(); // return default value of type T
        }
        T element = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        return element;
    }

    T front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return T(); // return default value of type T
        }
        return data[firstIndex];
    }
};

int main()
{
    Queues<int> q(5); // create a queue of integers with capacity 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Queue size: " << q.GetSize() << endl;

    cout << "Front element: " << q.front() << endl;

    int dequeued = q.dequeue();
    cout << "Dequeued element: " << dequeued << endl;

    cout << "Queue size: " << q.GetSize() << endl;

    return 0;
}