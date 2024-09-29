#include <iostream>
using namespace std;

void correspondingPairSum(int arr[], int n, int output[]) {
    for (int i = 0; i < n/2; i++) {
        output[i] = arr[i] + arr[n-i-1];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int output[n/2];
    correspondingPairSum(arr, n, output);

    for (int i = 0; i < n/2; i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}