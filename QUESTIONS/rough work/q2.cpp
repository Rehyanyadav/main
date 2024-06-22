#include <iostream>

using namespace std;

int main() {
    int N;


    cin >> N;

    // Outer loop for rows
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            cout << "  "; // Two spaces for better formatting
        }
        // Print numbers in ascending order
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
