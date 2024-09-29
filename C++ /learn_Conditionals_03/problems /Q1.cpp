/*

Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.

1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet.

Example:
Input: The character is 'a'.

Output: 0

Explanation: The input character is lowercase, so our answer is 0.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
v

Sample Output 1 :
0

Explanation of Sample Input 1:
The input character is lowercase, so our answer is 0.

Sample Input 2 :
V

Sample Output 2 :
1

Explanation of Sample Input 2:
The input character is uppercase, so our answer is 1.

Sample Input 3 :
#

Sample Output 3 :
-1

Explanation of Sample Input 3:
The input character is not an alphabet, so our answer is -1.

Constraints :
The input can be any single character.

Hint:
Can you check in which range of characters ‘CH’ lie to check its type?


*/




#include<iostream>
using namespace std;
int main()
{


 char c;
 cin >>c;
 if ( c >= 'A' && c <= 'Z'){
     cout << "1";
    

 }
 else if ( c >= 'a' && c <= 'z'){

    cout <<"0";

 }

 else {
    cout <<"-1";

 }


}
