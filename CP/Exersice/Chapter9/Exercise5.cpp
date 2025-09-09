// Write a function called string_lower that accepts a string and returns it in lowercase. 
#include <iostream>
using namespace std;
#include <cctype> // For tolower() function

// create function 
string string_lower(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
    // ask user input
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    // convert it to lower string
    string lower = string_lower(input);
    cout << "Lowercase string: " << lower << endl;
    
    return 0;
}