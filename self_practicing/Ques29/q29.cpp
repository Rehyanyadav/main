#include <vector>
#include<iostream>
using namespace std;

int* printDivisors(int n, int &size) {
  // Create a vector to store the divisors (more efficient for resizing)
  std::vector<int> divisors;

  // Find divisors less than or equal to the square root of n
  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      divisors.push_back(i);
      if (i != n / i) {
        divisors.push_back(n / i);
      }
    }
  }

  // Sort the divisors in ascending order
  std::sort(divisors.begin(), divisors.end());

  // Update the size variable with the length of the divisors vector
  size = divisors.size();

  // Allocate memory for the return array (dynamic allocation)
  int* divisors_arr = new int[size];

  // Copy elements from vector to array
  for (int i = 0; i < size; ++i) {
    divisors_arr[i] = divisors[i];
  }

  return divisors_arr;
}

// Example usage
int main() {
  int N = 10;
  int size = 0;
  int* divisors = printDivisors(N, size);

  std::cout << "Divisors of " << N << " are: ";
  for (int i = 0; i < size; ++i) {
    std::cout << divisors[i] << " ";
  }
  std::cout << std::endl;

  // Deallocate memory after use (important!)
  delete[] divisors;

  return 0;
}




// divisors vector: A vector is used to store the divisors. It's more efficient for resizing compared to a fixed-size array.
// Looping till square root: The loop iterates as before.
// Checking for divisibility and appending: Similar logic as the Python version.
// Sorting: The sort function sorts the divisors vector.
// Updating size: The size variable is updated with the vector size.
// Dynamic allocation: Memory is allocated for the return array using new int[size].
// Copying elements: A loop copies elements from the vector to the array.
// Returning the array: The pointer to the allocated array is returned.
// Example usage: The main function demonstrates how to call the function, print the divisors, and deallocate the memory using delete[] divisors; after use (important to avoid memory leaks).



// not workable 
// #include <iostream>
// using namespace std;

// int* printDivisors(int n, int& size) {
//     size = 0;
//     int* divisors = new int[n];
//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             divisors[size] = i;
//             size++;
//             int j = n / i;
//             if (i != j) {
//                 divisors[size] = j;
//                 size++;
//             }
//         }
//     }
//     int* result = new int[size];
//     for (int i = 0; i < size; i++) {
//         result[i] = divisors[i];
//     }
//     delete[] divisors;
//     return result;
// }

// int main() {
//     int n;
//     cin >> n;

//     int size;
//     int* divisors = printDivisors(n, size);

//     for (int i = 0; i < size; i++) {
//         cout << divisors[i] << " ";
//     }
//     cout << endl;

//     delete[] divisors;
//     return 0;
// }






