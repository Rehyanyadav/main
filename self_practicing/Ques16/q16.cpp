#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int count = 0;
    int num = 1; // Start from 1st term

    while (count < x) {
        int term = 3 * num + 2;
        if (term % 4 != 0) {
            std::cout << term << " ";
            count++;
        }
        num++;
    }

    return 0;
}
