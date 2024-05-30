#include<iostream>
#include<string> //header file to include string 
using namespace std;
int main()
{

//adding string variables with data
    string str =" college";

//scnd method to add string variables with data 

    string str1("rehyan");

cout <<str<<endl<<str1<<endl;




//taking input for string variables
 string str2;
cout <<"input your string: ";
cin >>str2; /* 
here the extraction operator  take input 
for string variable
 When the spaces entered it terminates the extraction


*/
cout <<str2;

/*if we want to stores spaces in the string 
variables then we need to store
 
 (getline)

*/
 string str3;
 getline (cin,str3);
 cout<<str3;


 


    return 0;
}