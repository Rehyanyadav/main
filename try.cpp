#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int numberOfElement(int n, vector<int> &v) {
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if (v[i] == v[i - 1] || v[i] == v[i + 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << numberOfElement(n, v) << endl;
    }
    return 0;
}