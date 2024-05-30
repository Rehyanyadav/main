/*
*push_back()

Insert char at the end of the string 
variable_name.push_back(char);


*size ()
This is used for find the size of the string 
str.size ()     
str.length()
*Time complextiy is - O(1)


for character array 

char ch [20];
strlen(ch);
*Time compplexity is - O(n)



*to_string ()
This function is used to convert int  values to string 
examples : int num = 4;
            to_string(num);
*/

#include<iostream>
#include<string>
#include<cstring> // include this library for strlen function

using namespace std;
int main()
{

    // * push_back() -- used to add element to end of string

 string str1= "hello";
 char ch = 'e';
 str1.push_back(ch);
 cout << str1 << endl;


// *size()  operator 
string s1 = "alpha";
cout <<s1.size ()<<endl;

//character array 
char ch1[20] ="abcde"; // renamed the array to ch1 to avoid conflict with char ch
cout <<strlen(ch1)<<endl;



// * to_string () - Convert to string
int num =34;
string s3 = to_string(num);
 s3+= "1";
 cout<<s3<<endl;
cout<<s3[1] <<endl;

    return 0;
}