#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<vector <int> > vecofvecs(3,vector<int>(4,0));
    for(int i = 0; i<vecofvecs.size(); i++){
        for(int j = 0; j<vecofvecs[i].size (); j++){
            cout<<vecofvecs[i][j]<<" ";

        }
        cout<<endl;
        
    }
    return 0;
}