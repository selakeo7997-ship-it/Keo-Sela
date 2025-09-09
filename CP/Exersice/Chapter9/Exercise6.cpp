#include <iostream>
#include <cctype>  // Needed for tolower function

using namespace std;

// Function to compare two strings in a case-insensitive way
bool string_comparei(const string& str1, const string& str2){

    // First, check if the lengths of the two strings are the same
    if (str1.length() != str2.length()){

        return false;  // if lengths are different, strings cannot be equal
    }

    // Loop through each character in the strings
    for (size_t i = 0; i < str1.length(); ++i) {
        // Convert both characters to lowercase and compare
        if (tolower(str1[i]) != tolower(str2[i])){

            return false;  // if any characters don't match, return false
        }
    }

    // All characters matched in a case-insensitive way, so return true
    return true;
}

int main() {
    string s1, s2;

    // Ask the user to enter the first string
    cout << "Enter first string: ";
    getline(cin, s1);  

    // Ask the user to enter the second string
    cout << "Enter second string: ";
    getline(cin, s2); 

    // Call the function and check the result
    if (string_comparei(s1, s2)){
        cout << "Strings are equal (case-insensitive)." << endl;
    } 
    else{
        cout << "Strings are NOT equal." << endl ;
    }

    return 0 ;
}
