
/*

Given three positive integers as X, Y and Z representing three sides of a triangle, write a program that determines whether the triangle formed by the sides exist or not. If the triangle exists, classify it as isosceles, scalene or equilateral.
Condition for valid Triangle:
Sum of any two of its sides should be greater than the third side

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1<=X,Y,Z<=10^5
Sample Input 1:
3
4
5
Sample Output 1:
Scalene Triangle
Explanation
As all three sides are different, so triangle is scalene.
Sample Input 2:
2
7
9
Sample Output 2:
Not a Triangle

*/

#include<iostream>
using namespace std;
 int main (){

int x ,y, z ;

cin >> x>>y>>z;

if ( x+y<=z || x+z<=y|| y+z<=z ){
    cout << "Not a Triangle";

}

else if( x==y || y==z ){
    cout << "Equilateral  Triangle";

}

else if ( x ==y || x==z|| y==z){
    cout << "Isosceles Triangle";
}
else {

    cout << "Scalene Triangle";

    
}

return 0;
 }



