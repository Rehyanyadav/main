#include <iostream>

using namespace std;

int main() {
    int char_count = 0, digit_count = 0, space_count = 0;
    char ch;

    while ((ch = cin.get()) != '$') {
        if (ch >= 'a' && ch <= 'z') {
            char_count++;
        } else if (ch >= '0' && ch <= '9') {
            digit_count++;
        } else if (ch == ' ' || ch == '\t' || ch == '\n') {
            space_count++;
        }
    }
    cout << char_count << " " << digit_count << " " << space_count << endl;
    return 0;
}
