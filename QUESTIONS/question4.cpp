#include <iostream>
using namespace std;

int main() {
    int total_amount;  //* AMOUNT ENTERED BY USER 

    cout << "Enter the total amount: ";
    cin >> total_amount;

    int count_100, count_50, count_10, count_1; //VARIABLE FOR NOTES

    count_100 = count_50 = count_10 = count_1 = 0; //INITIALLY COUNT ZERO 

    while (total_amount > 0) {
        switch (total_amount / 100) {
            case 14:  
            case 13:
            case 12:
            case 11:
            case 10:
                total_amount -= 100;
                count_100++;
                break;
            default:
                switch (total_amount / 50) {
                    case 28:  
                    case 27:
                    case 26:
                    case 25:
                    case 24:
                        total_amount -= 50;
                        count_50++;
                        break;
                    default:
                        switch (total_amount / 10) {
                            case 144:  
                            case 143:
                            case 142:
                            case 141:
                            case 140:
                                total_amount -= 10;
                                count_10++;
                                break;
                            default:
                                total_amount -= 1;
                                count_1++;
                                break;
                        }
                        break;
                }
                break;
        }
    }

    cout << "No of 100 rupee " << count_100 << endl;
    cout << "N0 of 50 rupee  " << count_50 << endl;
    cout << "N0 of 10 rupee  " << count_10 << endl;
    cout << "N0 of 1 rupee " << count_1 << endl;

    return 0;
}