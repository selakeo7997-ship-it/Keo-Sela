// Group9 
// write a program to Check  whether  a  character  input  by  a  user  is  an  alphabet  or  not.  If it is  an  alphabet, check  if  it  is  a 
// vowel or a consonant.
#include <iostream>
#include <string>
using namespace std;
int main(){
    char character;

    // ask user to input. 
    cout << "Please Enter any character to check: ";    
    cin >> character;

    // Check if the lowercase character is a vowel (a, e, i, o, u)
    if (isalpha(character)){
        char small_character = tolower(character);
        if (small_character == 'a' ||
            small_character == 'e' ||
            small_character == 'i' ||
            small_character == 'o' ||
            small_character == 'u' )
            {  
            cout << "It's vowel." << endl;
        }

        else{
            cout << "It's consonant."; 
        }
    }
    else{
        cout << "It's not vowel and consonant.!";
    }

    return 0;
}