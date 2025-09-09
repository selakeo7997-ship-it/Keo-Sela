/*
Group9
Write a program that determines whether an integer array is a palindrome
*/

#include <iostream>
using namespace std;

int main(){

    int size ;

    // Ask the user to enter the size of array
    cout << "Please enter size of array : " ;
    cin >> size ;

    int array[size] ;

    // Ask the user to input the element of array
    cout << "Enter" << size << "integers of array: " << endl ;
    for (int i = 0; i < size; i++){
        cin >> array[i] ;
    }

    // Assume it's a palindrome initially(1=true , 0 =false)
    int palindrome = 1 ;

    // Check if array is palindrome
    for(int left = 0, right = size - 1 ; left < right ; left++ , right-- ){

        // Compare element from both ends moving toward center
        if(array[left] != array[right]){
            palindrome = 0 ; // not a palindrome
            // Exit loop immediately when mismatch is found
            break ;
        } 
    }

    //Display the resualt
    if(palindrome){
        cout << "The array is a palindrome." << endl ;
    }
    else{
        cout << "The array is not a palindrome." ;
    }

    return 0;
}