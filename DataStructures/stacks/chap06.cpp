//*QUESTIONS 

#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template<typename T>
class Stack {
    Node<T>* head;
    int size; // number of elements present

public:
    Stack() {
        head = NULL; // initially head is null
        size = 0; // and size is zero initially
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void push(T element) {
        Node<T>* newNode = new Node<T>(element); // creating new node and passing element
        newNode->next = head;
        head = newNode;
        size++;
    }

    T pop() {
        T ans = head->data;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    T top() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty");
        }
        return head->data;
    }
};

int main() {
    Stack<char> s;
    s.push('A');
    s.push('B');
    s.push('C');
    s.push('D');
    s.push('E');

    cout << s.top() << endl;

    cout << s.pop() << endl;

    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}