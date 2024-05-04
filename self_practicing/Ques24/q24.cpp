#include <iostream>
using namespace std;

int findMin(int arr[], int N) {
    int min = arr[0];
    for(int i = 1; i < N; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << findMin(arr, N) << endl;
    return 0;
}