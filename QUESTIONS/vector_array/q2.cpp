



#include<iostream>
#include<vector>

using namespace std;
int main()
{


vector <int > v(6);
for(int i =0; i<v.size();i++){
     cin>>v[i];

}


cout<<"enter x :";
int x;
cin >>x;

int count = 0;

for(int i=0; i<v.size(); i++){

if(v[i]>x){
    count ++;

}
}

cout<<count;


    return 0;
}