/*Ask the user to enter a word and check if it is a palindrome (if it can be read backwards the same 
way). */

#include <iostream>
using namespace std;

int main(){

    // Ask the user to enter the word
    string word ;
    cout << "Please enter the word : " ;
    cin >> word ;

    // To get the number of charecters in the word 
    int length = word.length() ;
    // Assume the word is a ppalindrome (it mean 1 = true)
    int Palindrome = 1 ;

    // Use the loop through the first half of the string  
    for(int i = 0 ; i < length/2 ; i++){

        // Compare charecters from start and end
        if(word[i] != word[length - 1 -i]){
            // If mislmatch found, it's not a palindrome 
            Palindrome = 0 ;
            break ;
        }
    }

    // Display the result the word is palindrome or not 
    if(Palindrome == 1){
        cout << word << " is the palindrome!" ;
    }
    else{
        cout << word << " is not palindropme!" ;
    }

    return 0;
}