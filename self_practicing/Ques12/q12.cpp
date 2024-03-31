#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        int a = 1, b = 1;
        for (int i = 0; i < n - 2; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << fibonacci(N) << endl;
    }
    return 0;
}