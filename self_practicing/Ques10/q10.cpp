#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i) {
            cout << " ";
            j++;
        }
        j = 1;
        int k = i;
        while (j <= i) {
            cout << k;
            k++;
            j++;
        }
        k = k - 2;
        int l = 1;
        while (l <= i - 1) {
            cout << k;
            k--;
            l++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

