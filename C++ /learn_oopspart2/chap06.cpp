#include <iostream>

class DynamicArray {
    int* data;
    int nextIndex;
    int capacity;// Total Size 

public:
    DynamicArray() {
        data = new int[5];  //Starting with capacity = 5
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(const DynamicArray& d) {
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++) {
            this->data[i] = d.data[i]; 
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

//operator overloading :we are simply equating two arrays

    void operator=(const DynamicArray& d) {
        if (this != &d) {
            delete[] data;
            this->data = new int[d.capacity];
            for (int i = 0; i < d.nextIndex; i++) {
                this->data[i] = d.data[i];
            }
            this->nextIndex = d.nextIndex;
            this->capacity = d.capacity;
        }
    }

    // ~DynamicArray() {
    //     delete[] data;
    // }
// inserting a new element to the array 

    void add(int element) {
        if (nextIndex == capacity) {
            int* newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++) {
                newData[i] = data[i];  // elements copied to the array
            }
            delete[] data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i) const { // for returning the elements at particular index 
        if (i < nextIndex) {
            return data[i];
        } else {
            return -1;
        }
    }

    void add(int i, int element) {
        if (i < nextIndex) {
            data[i] = element;
        } else if (i == nextIndex) {
            add(element);
        } else {
            return;
        }
    }

    void print() const {   // for printing the complete array 
        for (int i = 0; i < nextIndex; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    DynamicArray arr;
    arr.add(10);
    arr.add(20);
    arr.add(30);
    arr.print();  // Output: 10 20 30
    arr.add(1, 40);
    arr.print();  // Output: 10 40 30
    return 0;
}