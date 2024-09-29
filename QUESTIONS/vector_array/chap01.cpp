#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    cout << "size: " << v.size() << endl;
    cout << "capacity : " << v.capacity() << endl;

    v.push_back(10);
    cout << "size : " << v.size() << endl;
    cout << "capacity  : " << v.capacity() << endl;

    v.push_back(20);
    cout << "size : " << v.size() << endl;
    cout << "capacity : " << v.capacity() << endl;

    v.push_back(30);

    cout << "size : " << v.size() << endl;
    cout << "capacity : " << v.capacity() << endl;
    v.push_back(40);


    v.resize(5);
    cout<<"size : "<<v.size()<<endl;
cout<<"capacity : "<<v.capacity()<<endl;


v.resize(10);
cout<<"size : "<<v.size()<<endl;
cout<<"capacity : "<<v.capacity()<<endl;

v.pop_back();
v.pop_back();
cout<<"size : "<<v.size()<<endl;
cout<<"capacity : "<<v.capacity()<<endl;

    return 0;
}