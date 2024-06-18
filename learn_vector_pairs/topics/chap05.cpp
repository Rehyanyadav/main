
//* vector of Vectors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector <int> > vecofvects;
    vector<int> vec1(4,5);
    vector<int> vec2(4,3);
    vector<int>vec3(4,8);
    vecofvects.push_back(vec1);
        vecofvects.push_back(vec2);
            vecofvects.push_back(vec3);
for (int i = 0; i<vecofvects.size(); i++){
    for (int j = 0; vecofvects[i].size(); j++){
        cout<<vecofvects[i][j]<<" ";

    }
    cout<<endl;
}
    return 0;
}