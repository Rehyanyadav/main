#include<iostream>
#include<vector>
using namespace std;
int main()
{


    vector<int> v;
    for(int i =0; i<5; i++)
    {
int element;
cin>>element;
v.push_back(element);
    }

    vector<int> v1;
    for(int i =0;i <5; i++){
        int element;
        cin>>element;
        v.push_back(element);

    }

    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}