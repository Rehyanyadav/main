#include <iostream>
using namespace std;

int main() {
    
 

    int n;
    cin >> n;
    int space = n - 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        space = n - i;
        while (space > 0)
        {
            cout << " ";
            space--;
        }
        while (j <= ((2 * i) - 1))
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    
    return 0;
}