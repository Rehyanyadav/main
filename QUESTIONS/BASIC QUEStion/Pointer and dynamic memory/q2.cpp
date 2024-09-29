//*wap to print a string using pointer


#include<iostream>

using namespace std;

int main()
{


char  *str;
cout<<"Enter the string ";

cin>>str; 

char *ptr = str;

while(*ptr != '\0'){
    cout<<*ptr;
    ptr++;

}



cout<<endl;


    return 0;
}