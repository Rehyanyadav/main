#include<iostream>
using namespace std;

int main() {
    int n, evenSum = 0, oddSum = 0;
    cin >> n;
    
    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        n /= 10;
    }
    
    cout << evenSum << " " << oddSum << endl;
    
    return 0;
}