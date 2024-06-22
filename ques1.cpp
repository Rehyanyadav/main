#include <iostream>
using namespace std;

int main() {
    int total_amount = 1440;  //* AMOUNT YOU ENTERED 

    int count_100, count_50, count_10, count_1; //VARIABLE FOR NOTES

    count_100 = count_50 = count_10 = count_1 = 0; //INITIALLY COUNT ZERO 

    while (total_amount > 0) {
        // int note_value = total_amount >= 100 ? 100 :
        //                  total_amount >= 50 ? 50 :
        //                  total_amount >= 10 ? 10 : 1;

        int note_value;
if (total_amount >= 100) {
    note_value = 100;
} else if (total_amount >= 50) {
    note_value = 50;
} else if (total_amount >= 10) {
    note_value = 10;
} else {
    note_value = 1;
}

        switch (note_value) {
            case 100:
                count_100++;
                break;
            case 50:
                count_50++;
                break;
            case 10:
                count_10++;
                break;
            case 1:
                count_1++;
                break;
        }

        total_amount -= note_value;
    }

    cout << "No of 100 rupee " << count_100 << endl;
    cout << "N0 of 50 rupee  " << count_50 << endl;
    cout << "N0 of 10 rupee  " << count_10 << endl;
    cout << "N0 of 1 rupee " << count_1 << endl;



///* Agr tumko sum bhi krna hai  so tum baad may function create krk sum krr lena 

    return 0;
}

//time complexity 
//  O(n)
//space complexity
