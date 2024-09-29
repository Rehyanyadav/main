/*
*strcat()
This function is used to concatinate char arrays

*/

#include<iostream>
#include<string>


using namespace std;
int main()
{

    char str1[20] = {"alpha" };
    char str2[20] = {"codes"} ;
 strcat(str1, str2);
 cout <<str1;

    return 0;
}
