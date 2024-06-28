//*wap to find the  sum of digit of a given number using pointer


#include <iostream>
using namespace std;

int sumOfDigits(int* num) {  // functions take pointer as input 

    int sum = 0;
    while (*num!= 0) {
        sum += *num % 10;
        *num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
   cin >> num;

    int* ptr = &num;
    int sum = sumOfDigits(ptr);

   cout << "Sum of digits: " << sum <<endl;

    return 0;
}