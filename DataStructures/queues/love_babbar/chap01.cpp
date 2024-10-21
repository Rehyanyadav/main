#include<iostream>
#include<queue>
using namespace std;

int main(){


    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
cout<<q.size()<<endl;

q.pop();
cout<<q.size()<<endl;

if(q.empty()){
    cout<<"Queue is empty"<<endl;
}else{
    cout<<"Queue is not empty"<<endl;
}
    return 0;

}