/*
*Size 
* pus_back && pop_back

*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{

vector<int> a(4,8);
a.pop_back();
for(int i = 0; i<a.size(); i++){
    cout <<a[i];
}


    return 0;
}