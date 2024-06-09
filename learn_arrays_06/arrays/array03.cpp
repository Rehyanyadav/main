#include<iostream>
using namespace std;
int main(){

int array []= {1,2,3,4};

int size =sizeof (array[0]);
 for(int idx = 0; idx<size; idx++){
    
     cout <<array[idx]<< endl ;
 }
return 0 ;
}
