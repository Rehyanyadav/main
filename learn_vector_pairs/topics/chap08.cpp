//* PAIRS IN STL (Standard template Library)

#include<iostream>
#include<utility>

using namespace std;
int main()
{
    pair <char , int> a ('b',1);
    cout<<"first : "<<a.first <<endl;
    cout<<"second :"<<a.second<<endl; 
    return 0;
}