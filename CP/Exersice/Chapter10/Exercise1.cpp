/* Group 9
Write a program that first will read integers from the user into a vector until the user enters 0. Then, 
remove all duplicates in the vector, and display the vector. */
    
#include <iostream>
#include <vector> //Header for using vector
using namespace std;

int main() {
    // Declare a vector to store all input numbers
    vector<int> numbers;

    // Declare a vector to store unique numbers
    vector<int> unique_numbers;
    int input;

    // Ask the user for input the numbers
    cout << "Enter integers (the number 0 to stop): " << endl;

    // Read integers from the user until 0 is entered
    while (true) {
        cin >> input;
        if (input == 0)
            break; 
        numbers.push_back(input); // Add input to numbers vector
    }

    // Remove duplicates by checking if each number is already in unique_numbers
    for (int num : numbers) {
        bool found = false;
        for (int u : unique_numbers) {
            if (num == u) {
                found = true; // Duplicate found
                break;
            }
        }
        if (!found) {
            unique_numbers.push_back(num); // Add only if not a duplicate
        }
    }

    // Display the vector without duplicates
    cout << "Vector without duplicates: ";
    for (int num : unique_numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0; 
}
