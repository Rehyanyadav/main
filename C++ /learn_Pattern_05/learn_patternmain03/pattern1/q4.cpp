/*

Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC

*/


#include <iostream>
#include <cctype> // fortoupper

using namespace std;

int main() {
  int n;

  cin >> n;

  // Input validation (optional)
  if (n < 0 || n > 26) {
    return 1; // Indicate error
  }

  for (char ch = 'A'; ch <= 'A' + n - 1; ++ch) {
    for (int i = 1; i <= ch - 'A' + 1; ++i) {
      cout << ch;
    }
    cout << endl;
  }

  return 0; // Indicate successful execution
}
