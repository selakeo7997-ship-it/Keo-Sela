#include <iostream>
using namespace std;

float celsius_to_fahrenheit(float celsius, float fahrenheit){
    return (9.0/5.0) * (celsius + 32) ;
}
float fahrenheit_to_celsius(float celsius, float fahrenheit){
    return (9.0/5.0) * (fahrenheit - 32) ;
}

int main(){

    int choise ;
    float celsius, fahrenheit ;

    do {
        cout << "==========||MENU||==========" << endl ;
        cout << "1. Convert form celsius to fahrenheit" << endl ;
        cout << "2. Convert from fahrenheit to celsius" << endl ;
        cout << "3. Exit the program" << endl ;
        cout << "Please choise the menu : " ;
        cin >> choise ;

        switch(choise){
            case 1:
                cout << "Vannara smos choise to Convert form celsius to fahrenheit" << endl ;
                cout << "Vannara smos enter the value of the celsius : " ;
                cin >> celsius ;
                cout << "Fahrenheit = " << celsius_to_fahrenheit(celsius, fahrenheit) << endl ;
                break;

            case 2:
                cout << "Vannara smos choise to Convert from fahrenheit to celsius" << endl ;
                cout << "Vannare smos enter the value of the fahrenheit : " ;
                cin >> fahrenheit ;
                cout << "Celsius = " << fahrenheit_to_celsius(celsius, fahrenheit) << endl ;
                break;

            case 3:
                cout << "Exit the program" << endl ;
                break ;

            default: 
            cout << "Invalid choise. Please try again." << endl ;
        }
    }
    while (choise != 3);
    
    return 0;
}