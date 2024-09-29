
//* strcpy(destination_string , source string)
#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char arr[100]= "abc";
     char arr1[100] ="def";

    cout<<"Before copying : ";
    cout<<"arr: "<<arr<<endl<< "arr1: "<<arr<<endl;
strcpy(arr , arr1);
    cout<<"After copying";

        cout<<"arr: "<<arr<<endl<< "arr1: "<<arr1<<endl;
    return 0;
}