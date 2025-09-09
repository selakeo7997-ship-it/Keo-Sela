//Group9
//A program ask the user to enter number and display even number
#include <iostream>  
using namespace std;  
//Function to display even digits from number
void display_even(int num){
    cout << "Even digits:";
    while(num>0){ //repeat until all digit are checked
        //get the last digit
        int digit = num % 10; 
        //check if the digit is even
        if (digit % 2 == 0) 
        //show the evendigit
        cout << digit << " "; 
        // remove the last digit
        num /= 10; 
    }
    //go to new line ofter showing all even
    cout << endl;
}

int main(){
    int n;//variable 

    // get number from user
    cout <<"Mnus smos enter an integer: " ; 
    cin >> n;

    //call the function to show even
    display_even(n); 

    //end program
    return 0;
}


