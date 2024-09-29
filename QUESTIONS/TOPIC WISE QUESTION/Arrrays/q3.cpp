//* second largest element in an array 

#include<iostream>
#include<algorithm>
using namespace std;

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

void secondLargest(int arr[], int n) {
    int max = arr[0];
    int secondMax = INT_MIN;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    if(secondMax == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "Second largest: " << secondMax << endl;
    }
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    inputArray(arr, n);

    sort(arr, arr+n);

    showArray(arr, n);
    secondLargest(arr, n);

    return 0;
}