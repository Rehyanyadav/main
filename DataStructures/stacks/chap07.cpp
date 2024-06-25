//* STACK USING STL ( <stack>)

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // Print the top element of the stack
    cout << "Top element: " << s.top() << endl;

    // Pop elements from the stack
    cout << "Popped element: " << s.top() << endl;
    s.pop();
    cout << "Popped element: " << s.top() << endl;
    s.pop();
    cout << "Popped element: " << s.top() << endl;
    s.pop();

    // Check if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Get the size of the stack
    cout << "Stack size: " << s.size() << endl;

    return 0;
}