#include <iostream>
using namespace std;

int main() {
    int total_amount; 
    cout << "Enter the total amount: ";
    cin >> total_amount;

    int count_100, count_50, count_10, count_1; 
    count_100 = count_50 = count_10 = count_1 = 0; 

    while (total_amount > 0) {  
 
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


int SumOfNote = count_100+count_10+count_1+count_50;
cout<<SumOfNote;
    return 0;
}


//*greedy algorithm


/*
*This code uses a Greedy Algorithm to solve the problem of finding the number of notes of different denominations (100, 50, 10, and 1) required to make up a given total amount.


*User Input:

 *The program prompts the user to enter a total amount, 

 *which is stored in the total_amount variable.

*Initialization: The program initializes four counters (count_100, count_50, count_10, and count_1) to 0,
 
*which will be used to store the number of notes of each denomination required.

*While Loop: The program enters a while loop that continues until the total_amount is reduced to 0.

*Determine Note Value: Inside the loop, the program determines the largest note value that can be subtracted from the total_amount. It checks in descending order: 100, 50, 10, and 1.

*Increment Counter: The program uses a switch statement to increment the corresponding counter variable based on the note_value.

*Subtract Note Value: The program subtracts the note_value from the total_amount.

*Repeat Loop: The loop continues until the total_amount is reduced to 0.

*Output: The program outputs the final counts for each note denomination.

*Sum of Notes: The program calculates the total number of notes required by summing up the individual counters.


*/