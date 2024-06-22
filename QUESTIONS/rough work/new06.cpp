#include <iostream>
#include <cstdio>
using namespace std;



void printNumber(int n) {
    if (n < 10) {
        switch (n) {
            case 1: cout << "one" << endl; break;
            case 2: cout << "two" << endl; break;
            case 3: cout << "three" << endl; break;
            case 4: cout << "four" << endl; break;
            case 5: cout << "five" << endl; break;
            case 6: cout << "six" << endl; break;
            case 7: cout << "seven" << endl; break;
            case 8: cout << "eight" << endl; break;
            case 9: cout << "nine" << endl; break;
        }
    } else if (n < 20) {
        switch (n) {
            case 10: cout << "ten" << endl; break;
            case 11: cout << "eleven" << endl; break;
            case 12: cout << "twelve" << endl; break;
            case 13: cout << "thirteen" << endl; break;
            case 14: cout << "fourteen" << endl; break;
            case 15: cout << "fifteen" << endl; break;
            case 16: cout << "sixteen" << endl; break;
            case 17: cout << "seventeen" << endl; break;
            case 18: cout << "eighteen" << endl; break;
            case 19: cout << "nineteen" << endl; break;
        }
    } else if (n < 100) {
        int tens = n / 10;
        int remainder = n % 10;
        switch (tens) {
            case 2: cout << "twenty"; break;
            case 3: cout << "thirty"; break;
            case 4: cout << "forty"; break;
            case 5: cout << "fifty"; break;
            case 6: cout << "sixty"; break;
            case 7: cout << "seventy"; break;
            case 8: cout << "eighty"; break;
            case 9: cout << "ninety"; break;
        }
        if (remainder != 0) {
            cout << "-";
            switch (remainder) {
                case 1: cout << "one" << endl; break;
                case 2: cout << "two" << endl; break;
                case 3: cout << "three" << endl; break;
                case 4: cout << "four" << endl; break;
                case 5: cout << "five" << endl; break;
                case 6: cout << "six" << endl; break;
                case 7: cout << "seven" << endl; break;
                case 8: cout << "eight" << endl; break;
                case 9: cout << "nine" << endl; break;
            }
        } else {
            cout << endl;
        }
    } else {
        cout << "Number out of range" << endl;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i < 10) {
            printNumber(i);
        } else if (i % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }
    return 0;
}