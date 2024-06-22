#include<iostream>
#include<cstring>
using namespace std;

int main()
{

char arr1[100];
char arr2[100];
cin>> arr1;
cin>>arr2;

//* strlen function
int len1 = strlen(arr1);
int len2 = strlen(arr2);
cout<<len1<<endl;
cout <<len2<<endl;


//* Comaparing two string  : strcmp (input1,input2)
if (strcmp(arr1,arr2)==0){
    cout << "true";
}
else {
    cout<< "false";
}



    return 0;
}