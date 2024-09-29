#include <iostream>
using namespace std;

int main() {
    int num;

    do {

    cin >> num;

        if (num == 15) {
            continue;
        }
        
        cout << num<<" ";

    } while (num != 50);


    return 0;
}