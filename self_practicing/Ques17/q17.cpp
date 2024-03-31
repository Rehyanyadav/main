#include <iostream>

using namespace std;

int main() {
    int N, reverse = 0;

    cin >> N;
    while (N > 0) {
        // Get the last digit of N
        int digit = N % 10;
        // Add the last digit to the reverse of N
        reverse = (reverse * 10) + digit;
        // Remove the last digit from N
        N /= 10;
    }
    cout << reverse << endl;
    return 0;
}