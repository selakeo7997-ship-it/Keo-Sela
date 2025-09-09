//A program ask the user to enter three number find the largest
#include <iostream>  
using namespace std;  

// Funtion to find and display the largest number among three
void display_largest(int num1 ,int num2 , int num3){
    //check which number is the largest
    if (num1>=num2 && num1>=num3){
        cout << "The largest number:" << num1;
    }
    
    else if(num2>=num1 && num2>=num3){
        cout << "The largest number:" << num2;
    }

    else{
        cout << "The largest number:" << num3;
    }
}

int main(){
    //Declare three integer vari
    int n1,n2,n3;

    //Prompt user to input three number
    cout << "Enter the number: ";
    cin >> n1 >> n2 >>n3;

    //call the funtion to displauy the largest number
    display_largest(n1,n2,n3);

    //Return0 to indicate the program executed successfully
    return 0;
}