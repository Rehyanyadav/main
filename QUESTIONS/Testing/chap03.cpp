// write a c++ program to take input  two vector, sort it, merge it, and find the median 
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int main() {
    // Take input for the two vectors
   vector<int> num1, num2;
    int size1, size2;
    
   cout << "Enter the size of vector 1: ";
   cin >> size1;
   cout << "Enter the elements of vector 1: ";
    for (int i = 0; i < size1; i++) {
        int element;
       cin >> element;
        num1.push_back(element);
    }
    
   cout << "Enter the size of vector 2: ";
   cin >> size2;
   cout << "Enter the elements of vector 2: ";
    for (int i = 0; i < size2; i++) {
        int element;
       cin >> element;
        num2.push_back(element);
    }
    
    // Sort the vectors
   sort(num1.begin(), num1.end());
   sort(num2.begin(), num2.end());
    
    // Merge the vectors
   vector<int> mergedVector;
   merge(num1.begin(), num1.end(), num2.begin(), num2.end(),back_inserter(mergedVector));
    
    // Find the median
    int mergedSize = mergedVector.size();
    int median;
    if (mergedSize % 2 == 0) {
        median = (mergedVector[mergedSize / 2 - 1] + mergedVector[mergedSize / 2]) / 2;
    } else {
        median = mergedVector[mergedSize / 2];
    }
    

    cout << "Merged Vector: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedVector[i] << " ";
    }
    cout << endl;
    cout << "Median: " << median << std::endl;
    
    return 0;
}




