#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int length = word.length();
    int isPalindrome = 1; // 1 means true, 0 means false

    // Compare characters from front and back
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Output result
    if (isPalindrome == 1)
        cout << word << " is a palindrome." << endl;
    else
        cout << word << " is not a palindrome." << endl;

    return 0;
}
