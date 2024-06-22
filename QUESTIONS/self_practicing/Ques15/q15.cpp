#include <iostream>

using namespace std;

int main() {
    int N, C, sum = 0, product = 1;
    cout << "Enter a number N: ";
    cin >> N;
    cout << "Enter a choice (1 for sum, 2 for product, any other number for -1): ";
    cin >> C;
    if (C == 1) {
        for (int i = 1; i <= N; i++) {
            sum += i;
        }
        cout << "Sum: " << sum << endl;
    } else if (C == 2) {
        for (int i = 1; i <= N; i++) {
            product *= i;
        }
        cout << "Product: " << product << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}
