//* strncpy (destination string , source string ,n )


#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char arr[100]= "abc";
     char arr1[100] ="def";

    cout<<"Before copying : ";
    cout<<"arr: "<<arr<<endl<< "arr1: "<<arr<<endl;
strncpy(arr , arr1,3);
    cout<<"After copying";

        cout<<"arr: "<<arr<<endl<< "arr1: "<<arr1<<endl;
    return 0;
}