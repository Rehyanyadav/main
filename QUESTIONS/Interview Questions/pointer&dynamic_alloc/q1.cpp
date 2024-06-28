
//* This question is asked in Facebook,bluestack, microsoft etc
/* 
Given an unsorted array of integers, 
you have to move the array elements in a way
 such that all the zeroes are transferred to the end,
  and all the non-zero elements are moved to the front.
   Use the concept of dynamic memory allocation
    for taking array input.
All non zero element will remain in same order as before.
For example, if the input array is: [0, 1, -2, 3, 4, 0, 5, -27, 9, 0], then the output array must be:
[1, -2, 3, 4, 5, -27, 9, 0, 0, 0].
Detailed explanation ( Input/output format, Notes, Images )
Input format :
The first line of input contains a single integer ‘T’ 
representing the number of test cases.      

The first line of each test case contains a single 
integer ‘N’ representing the size of the array.
 The second line of each test case contains ‘N’ 
 integers representing the elements of the array.
Output Format :
For each test case, modify the input array
 and print the output in a new line 
Constraints :
1 <= T <= 50 
1 <= N <= 10^6
-10000 <= A[i] <= 10000

Where ‘T’ is the number of test cases, ‘N’ 
is the size of the array, A[i] is the value of the 
element present at the ith index.
Time Limit:1sec
Sample Input 1:
2
7
2 0 4 1 3 0 28
5
0 0 0 0 1
Sample Output 1:
2 4 1 3 28 0 0
1 0 0 0 0
The explanation for Sample Output 1 :
In the first testcase, All the zeros are moved towards the end of the array, and the non-zero elements are pushed towards the left, maintaining their order with respect to the original array.

In the second testcase, All zero are moved towards the end, hence the only non-zero element i.e 1 is in the starting of the array 
Sample Input 2:
2
5
0 3 0 2 0
4
0 0 0 0
Sample Output 2:
3 2 0 0 0
0 0 0 0  */



#include<iostream>
using namespace std;

void movetozeros(int arr[], int n) {  //*  void function with argument array with size n 

    
    int insertion = 0;  //* it initalizes a variable insertion to Zero 
    //* this will keep the track of the position where next non-zero element should be inserted


    for (int i = 0; i < n; i++) {  //* loop started from 0 to n-1
        if (arr[i] != 0) {  //* check that 
            arr[insertion] = arr[i];
            insertion++;
        }
    }

    while (insertion < n) {
        arr[insertion] = 0;
        insertion ++;
    }
}

int main() {
  
int t;
cin>>t; // * added this line to read the number of test cases 

    while (t--) {
        int n;  
        cin >> n;

        int arr[n];  //* array with size n 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  //* taking input of array element 
        }

        movetozeros(arr, n);  //* calling function 

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " "; //* output the array 

        }
        cout << endl;
    }

    return 0;
}









/*

#include <iostream>

void moveZerosToEnd(int* arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    for (int i = count; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        moveZerosToEnd(arr, n);
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        delete[] arr;
    }
    return 0;
}


*/


