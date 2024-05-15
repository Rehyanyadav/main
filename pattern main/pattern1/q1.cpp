/*

Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444




*/



#include <iostream>

int main() {
  int N;
 std::cin>>N;
  int i = 1;
  while (i <= N) {
    int j = 1;
    while (j <= N) {
      std::cout <<N;
      j++;
    }
    std::cout << std::endl;
    i++;
  }
  return 0;
}