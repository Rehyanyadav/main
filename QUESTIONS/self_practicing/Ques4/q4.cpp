#include <iostream>
using namespace std;

int main() {
    int n;
   cin >> n;

    // Calculate the sum of even numbers from 1 to N
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

   cout << sum <<endl;

    return 0;
}