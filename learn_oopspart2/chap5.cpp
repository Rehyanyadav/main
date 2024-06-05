/*
*DYNAMIC ARRAY 
*/




#include<iostream>
using namespace std;
int main()
{

/*
*SYNTAX FOR CREATING A DYNAMIC ARRAY 
 
 dataType *nameofDynamicArray;
 nameoftheDyanmicArray = new nameoftheDyanmicArray[no of elements];
 nameoftheDyanmicArray[0]= value;
 delete[] nameofDynamicArray;

*/

int *myDynamicArray;
myDynamicArray = new int[3];

myDynamicArray[0] =  100;
myDynamicArray[1] =  200;
myDynamicArray[2] =  300;


for (int i =0; i<3; i++){
    cout <<myDynamicArray[i]<<endl;
}


delete[] myDynamicArray;

for (int i =0; i<3; i++){
    cout <<myDynamicArray[i]<<endl;
}

    return 0;
}



