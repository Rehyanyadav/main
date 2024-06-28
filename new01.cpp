#include<iostream>
#include<string>
using namespace std;


string com_prefix(string out1, string out2) {
string out;
int n1 = out1.length(), n2 = out2.length();
for (int i =0,  j = 0; i<n1 && j< n2; i++, j++)
{
if (out1[i] != out2[j]){

    break;
}
out.push_back(out1[i]);

}
return out;
}


string longestCommonPrefix(vector<string> &arr, int n){

    string prefix = arr[0];

    for (int i = 1; i<n; i++){
        prefix = com_prefix(prefix, arr[i]);
    }
 if (prefix== " ")
    {
return "-1";
    }
    return prefix;
}