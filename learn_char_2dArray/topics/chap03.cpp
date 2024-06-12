#include<iostream>
using namespace std;


int length(char arr[]){
  int count = 0;
  for (int i = 0;  arr[i]!= 0; i++ ){
    count ++;

  }

  return count ;

}
void reverse(char arr[]){
    int lenght  = length(arr);

    int i = 0; int j  = lenght-1;
    while (i<j)
    {
        /* code */
        char temp = arr[i];
arr [i ] = arr[j];
arr[j] = temp;
i++;
j--;


    }
    

}


int main()
{

char arr[100];
cout<<"Enter your Name : ";
cin.getline(arr,100);
reverse(arr);
cout <<arr<<endl;






    return 0;
}