template <class T>
class StackUsingArray {
    T *data;          // Pointer to dynamically allocated array to store stack elements
    int nextIndex;    // Index where the next element will be inserted
    int frontIndex;   // Index of the front element in the stack
    int size;         // Current number of elements in the stack
    int capacity;     // Maximum capacity of the stack

public:
    // Constructor
    StackUsingArray(int s) {
        data = new T[s];  // Allocate memory for the stack
        nextIndex = 0;    // Initialize nextIndex to 0
        frontIndex = -1;  // Initialize frontIndex to -1 (indicating stack is empty)
        size = 0;         // Initialize size to 0
        capacity = s;     // Set the capacity of the stack
    }

    // Function to get the current size of the stack
    int GetSize() {
        return size;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return size == 0;
    }

    // Function to insert an element into the stack
    void enqueue(T element) {
        if (size == capacity) {  // Check if the stack is full
            cout << "stack is full!!" << endl;
            return;
        }

        data[nextIndex] = element;  // Insert the element at nextIndex
        nextIndex = (nextIndex + 1) % capacity;  // Update nextIndex in a circular manner
        if (frontIndex == -1) {  // If the stack was empty, update frontIndex
            frontIndex = 0;
        }

        size++;  // Increment the size of the stack
    }

    // Function to get the front element of the stack
    T front() {
        if (size == 0) {  // Check if the stack is empty
            cout << "stack is empty" << endl;
            return 0;  // Return 0 if the stack is empty
        }
        return data[frontIndex];  // Return the front element
    }

    // Function to remove the front element from the stack
    T dequeue() {
        if (size == 0) {  // Check if the stack is empty
            cout << "stack is empty" << endl;
            return 0;  // Return 0 if the stack is empty
        }
        T ans = data[frontIndex];  // Store the front element
        frontIndex = (frontIndex + 1) % capacity;  // Update frontIndex in a circular manner
        size--;  // Decrement the size of the stack
        if (size == 0) {  // If the stack becomes empty, reset frontIndex and nextIndex
            frontIndex = -1;
            nextIndex = 0;
        }
        return ans;  // Return the removed element
    }

    // Function to display the elements of the stack
    void display() {
        if (size == 0) {  // Check if the stack is empty
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++) {  // Loop through the elements in the stack
            cout << data[(frontIndex + i) % capacity] << " ";  // Print each element
        }
        cout << endl;  // Print a newline character
    }
};