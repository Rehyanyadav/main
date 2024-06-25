
#include<iostream>
using namespace std;

void movetozeros(int arr[], int n) {
    int size = arr[n];

 if (size == 0 || size == 1){
    return ;

 }

 int nonzero= 0; 
 int zero= 0;
 while(nonzero<size){
    if (arr[nonzero]!= 0){
        int temp = arr[nonzero];
        arr[nonzero] = arr[zero];
        arr[zero]= temp;
        zero++;


    }
    else {
nonzero++;

    }
 }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        movetozeros(arr, n);

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

