/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
Detailed explanation ( Input/output format, Notes, Images )
Constraints
0 <= N <= 13
Sample Input 1:
5
Sample Output 1:
A
BC
CDE
DEFG
EFGHI
Sample Input 2:
6
Sample Output 2:
A
BC
CDE
DEFG
EFGHI
FGHIJK




*/


#include <iostream>
using namespace std;


int main() {
    int n;
   cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        int Start = 'A' + i - 1;
        while (j <= i) {
           cout << static_cast<char>(Start);
            j++;
            Start++;
        }
       cout << std::endl;
        i++;
    }
    return 0;
}

