#include <iostream>
using namespace std;

int main() {
    int size, i;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter " << size << " integers for the array:\n";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // Check if array is palindrome
    for (i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            break;
        }
    }
    
    cout << "The array is " << (i >= size/2 ? "" : "NOT ") << "a palindrome.\n";
    
    return 0;
}