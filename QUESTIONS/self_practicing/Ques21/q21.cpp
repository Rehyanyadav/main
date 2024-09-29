#include <iostream>
#include <cmath>

using namespace std;

void print_fahrenheit_celsius_table(int start, int end, int step) {
    int fah;
    while (start <= end) {
        fah = ((5 * (start - 32)) / 9);
        cout << start << " " << fah << endl;
        start += step;
    }
}

int main() {
    int S, E, W;
    cout << "Enter the range start: ";
    cin >> S;
    cout << "Enter the range end: ";
    cin >> E;
    cout << "Enter the increment: ";
    cin >> W;

    print_fahrenheit_celsius_table(S, E, W);

    return 0;
}