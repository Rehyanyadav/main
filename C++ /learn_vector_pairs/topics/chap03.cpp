#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(2);
    vec.push_back(5);

    int element = vec.at(1);  // array name.at(index no )
    cout<<"element: "<<element<<endl;




    return 0;
}