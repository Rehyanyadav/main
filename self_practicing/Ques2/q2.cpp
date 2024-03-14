#include <iostream>
using namespace std;

int main() {
    int score;
 
   cin >> score;

    // Check constraints
    if (!(35 <= score && score <= 100)) {
       cout << "Invalid score." <<endl;
        return 1;
    }

    // Determine the remark
    if (score > 75 && score <= 100) {
       cout << "Distinction" <<endl;
    } else if (score > 50 && score <= 75) {
       cout << "Average" <<endl;
    } else {
       cout << "Below Average" <<endl;
    }

    return 0;
}