#include <iostream>
#include <cmath>
using namespace std;

bool checkArmstrong(int n) {
    int k = 0;
    int temp = n;
    while (temp > 0) {
        k++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, k);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    cin >> n;

    bool result = checkArmstrong(n);
    cout << (result ? "true" : "false") << endl;

    return 0;
}