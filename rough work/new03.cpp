#include <iostream>
using namespace std;

int findSum(int arr[], int N) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << findSum(arr, N) << endl;
    return 0;
}