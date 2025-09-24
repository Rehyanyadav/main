
// aim of the lab Indexing, Traversal, In-place Updates

#include<iostream>

using namespace std;
int main()
{
int n ;
cout<<"input size";
cin>> n;
int arr[n];
cout<<"input number in array";
for(int i =0 ; i<n; i++){
  cin>> arr[i];

}
//* printing index and traversal 

for(int i =0; i<n ; i++){
    cout<< arr[i];

    cout << " Index: " << i << endl;
}


//* in-place update 
cout << "In-place update: Increment each element by 1" << endl;
for(int i = 0; i < n; i++) {
    arr[i] += 1;
}

// Print updated array
cout << "Updated array:" << endl;
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
cout << endl;

return 0;

}