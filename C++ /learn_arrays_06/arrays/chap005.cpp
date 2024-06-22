#include<iostream>
using namespace std;

void selection_sort(int input [],int n){

   for (int i =0; i<n; i++){
    // find the minimun element in array
     int min = input[i]; // minimum element in array
     int min_index = i; // minimum index in array
     for (int j =  i+1; j<n; j++){
        if (input[j] < min){
            min = input[j];
            min_index = j;
        }
     }
 // swap 
 int temp = input[i];
 input[i] = input[min_index];
 input[min_index] = temp;
   }
}

int main()
{

    int input [] ={ 3,2,4,5,5};
    selection_sort(input,6);
    for (int i = 0; i<6; i++){
        cout<<input[i]<<endl;
    }
    return 0;

}

