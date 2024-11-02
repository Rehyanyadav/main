#include<iostream>
#include<string>

using namespace std;

string encode(string &message) {
    // Result string to store the encoded message
    string encoded = "";
    
    // Length of the message
    int n = message.length();
    
    // Edge case: if the message is empty
    if (n == 0) {
        return encoded;
    }

    // Initialize the count for the first character
    char currentChar = message[0];
    int count = 1;

    // Iterate through the message starting from the second character
    for (int i = 1; i < n; i++) {
        if (message[i] == currentChar) {
            // If the current character is the same as the last one, increment the count
            count++;
        } else {
            // Append the current character and its count to the encoded string
            encoded += currentChar + to_string(count);
            // Update the current character and reset the count
            currentChar = message[i];
            count = 1;
        }
    }

    // Append the last character and its count
    encoded += currentChar + to_string(count);

    return encoded;
}

int main() {
    string message = "aaaabbbccdaa"; // Example input
    string encodedMessage = encode(message);
    cout << "Encoded Message: " << encodedMessage << endl; // Output: a4b3c2d1a2
    return 0;
}