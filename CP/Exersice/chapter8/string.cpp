/*
Group9
Write a function called string_upper that accepts a string and returns it in uppercase
*/

#include <iostream>
using namespace std;

// Users-definded function that takes a string by reference and return it in upper 
string string_upper(string & input) {

    // Copy input to a nw=ew string
    string result = input;

    // USe for loop to go through each character in the string one by one
    for (char& c : result) {
        // convert charecter to uppercase 
        c = toupper(c);
    }
    // Send the  uppercase of the string to the main function
    return result;
}

int main() {  

    // Declare the variable string for the user input 
    string word;

    // Ask the user to enter the string
    cout << "Please enter the string: ";
    getline(cin, word);

    // Display the result 
    cout << "The uppercase of " << word << " is : " << string_upper(word) << endl;
    return 0;
}
