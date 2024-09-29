/*
SUBTRACT THE SUM AND PRODUCT OF AN INTEGER 


Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
Example 2:

Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
 

Constraints:

1 <= n <= 10^5



*/


#include<iostream>
using namespace std;
int main (){

    int n; //initalize the input parameters
    cin >>n; //read the digits from the input given by user 


    int sum = 0; //initalize the sum with zero 
    int product = 1; //initialize the product with  1

while (n!=0){ // condtion that while  n is not equal to 0 
    int digit  = n%10;// digit  is equal to the  input number modulus 

    product = product*digit; // now product is equal to  product multiply with digit stored 

    sum= sum +digit; //same procedure for the sum 

    n = n/10;  // diving the input number with n 

}
int answer = product -sum ; // here is the final answer subtracting the product and sum 

cout<<answer<<endl;

}