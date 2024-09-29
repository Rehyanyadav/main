//* Find the Largest Element 
//*Optimal Solution

#include<iostream>


using namespace std;

// * Printing the array 
void showArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int largest(int arr[], int n) {
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    //* Array 
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    inputArray(arr, n);
    cout << "Array is: ";
    showArray(arr, n);
    cout << "Largest element is: " << largest(arr, n) << endl;

    return 0;
}