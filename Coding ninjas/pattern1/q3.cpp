/*




Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321
*/

#include <iostream>

using namespace std;

int main() {
  int n;
cin >> n;

  // Input validation (optional)
  if (n < 0 || n > 50) {
    
    return 1; // Indicate error
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      cout << i;
    }
    cout << endl;
  }

  return 0; // Indicate successful execution
}
