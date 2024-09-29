
/*
*-- given a string str ,sort the given string--*

constraints - The string will contain only 
alphabetical characters  from a-z

input 1 : "alphacodes"


*/

#include<iostream>
#include <string>
#include<vector>
using namespace std;

string countsort(string str){
    vector<int> freq(26,0);
    // adding frequency of every character in string 

    for(int i=0; i<str.length(); i++){
        int index  = str[i]-'a';
        freq [index]++;


    }

//creating our sorted string
string sorted_str = "";

for (int i = 0; i<26; i++){
    while(freq [i]--){
        sorted_str += i +'a';

    }

}
 return sorted_str;
 
}


int main()
{

 string str;
 cin>> str;


cout<<countsort(str)<<endl;
    return 0;
}
