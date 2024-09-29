#include<iostream>
using namespace std;
int main ()
{

int *dynamic_array;
dynamic_array = new int[3];
dynamic_array [0] = 100;
dynamic_array [1] = 200;
dynamic_array [2] = 300;
dynamic_array[3] = 400;


for (int i = 0; i<3;  i++){
    cout<<dynamic_array[i]<<endl;

}
     return 0;

}