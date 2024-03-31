#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int a = 1, b = 1;
    for (int i = 0; i < N - 2; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    cout << b << endl;
    return 0;
}