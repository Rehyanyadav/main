#include<iostream>
#include<string>
using namespace std;
int main()
{

    int n ;
 string str2;
cin >>n;
cin.ignore(1);   
getline(cin,str2);
cout<<"you entered : "<< n <<" and " <<str2<<endl;


    return 0;
}
