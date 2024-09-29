#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}

bool isFibonacci(int n) {
    if (n < 0) {
        return false;
    }
    if (n == 0 || n == 1) {
        return true;
    }
    int a = 0;
    int b = 1;
    while (b <= n) {
        if (b == n) {
            return true;
        }
        int c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        isFibonacci(i) ? cout << i << " is a Fibonacci number.\n" : cout << i << " is not a Fibonacci number.\n";
    }
    return 0;
}