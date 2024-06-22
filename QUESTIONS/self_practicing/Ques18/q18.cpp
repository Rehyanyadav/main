

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
std::cin >> N;

    int decimal = 0;
    int base = 1; // Base value for binary-to-decimal conversion

    while (N > 0) {
        int lastDigit = N % 10; // Extract the last digit
        decimal += lastDigit * base;
        base *= 2; // Multiply the base by 2 for each digit position
        N /= 10; // Remove the last digit
    }

    cout << decimal <<endl;
    return 0;
}
