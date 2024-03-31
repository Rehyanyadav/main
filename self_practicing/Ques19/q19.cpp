#include <iostream>

using namespace std;

int main() {
    int N;
 
    cin >> N;
    if (N == 0) {
        cout << 0 << endl;
    } else {
        string binary = "";
        while (N > 0) {
            // Get the last digit of N
            int digit = N % 2;
            // Add the last digit to the binary representation
            binary = (digit == 0 ? "0" : "1") + binary;
            // Remove the last digit from N
            N /= 2;
        }
        cout << binary << endl;
    }
    return 0;
}