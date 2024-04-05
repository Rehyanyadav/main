#include <iostream>
using namespace std;
int main() {
    int start, end, step;

   cin >> start;

   cin >> end;

   cin >> step;

 
 if (!(0 <= start && start <= 90 && start <= end && end<= 900 && 0<= step && step <= 80)){

cout << "Invalid input values." <<endl;
return 1;
}


    for (int f = start; f <= end; f += step) {
        int c = (f - 32) * 5 / 9;
       cout << f << " " << c <<endl;
    }

    return 0;
}