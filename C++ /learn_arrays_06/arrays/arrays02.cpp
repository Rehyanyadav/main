// method 1

/*
 sorting in ascending order then ( n-k+1) element will be 
 the largest element 
 if arranged in descending order kth element 
 will be the largest 

Time  complexity is O(NlogN)


*/

//method 2 

#include<iostream>
using namespace std;

int main(){
   int n = 4;
   int arr[5] = {n};
   for(int i = 0;i<5;i++){
          if(i == 4)
              break;
          if(i==2)
              continue;
        cout<<arr[i]<<" ";
   }
}