#include <iostream>

int main() {
    int num;

    do {

        std::cin >> num;

        if (num == 15) {
            continue;
        }
        
        std::cout << num<<" ";

    } while (num != 50);


    return 0;
}