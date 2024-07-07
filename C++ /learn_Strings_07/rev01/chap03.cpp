/*  
*reverse()


reverse a string from a starting pointer to end pointer 
reverse (ptr1,ptr2){
    string str = "abcd";
    reverse ( str.begin (), str.end ());

    
}

*TIME COMPEXITY - O(length of  string )

*/



#include<iostream>
#include <string>
using namespace std;
int main()
{

    string str ="hello ";
    reverse(str.begin (),str.end());
    cout<<str<<endl;
    
    return 0;
}