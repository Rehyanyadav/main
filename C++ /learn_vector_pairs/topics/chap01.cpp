/*
//* Vectors
vector is a dynamic array 

*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
// vector<double>
// vector<float>
// vector<datatype> array_name(size ,value)
vector<int> v(5, -1);  // delaring array  with size 5 
for (int i = 0; i<5;i++){
    cin>>v[i];
    
}
for (int i = 0; i<5; i++)
{
    cout <<v[i]<<" ";

}
    return 0;
}