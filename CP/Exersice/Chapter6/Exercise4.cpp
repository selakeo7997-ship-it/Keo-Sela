/*
Write a program that calculates the total working hours and the weekly salary for each employee. 
Ask the user to enter the department name, and display the result in a tabular format.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Constand salary for calculate 
    int Normal_working_hours = 15 ;
    int Overtime_rate = 10 ;
    int Rate_per_hour = 5 ;
    int Num_employees = 3 ;
    int Num_departments = 2 ;

    // Department and employees data 
    string departments[Num_departments] = {"ITE", "DSE"} ;
    string employees[Num_departments][Num_employees] = {
        {"Employee 1", "Employee 2", "Employee 3"},
        {"Employee 1", "Employee 2", "Employee 3"}
    } ;

    // Array to store hours and salaries
    int hours[Num_departments][Num_employees] = {0} ;
    int salaries[Num_departments][Num_employees] = {0} ;

    // Get department choice from the user
    char dept_choice ;
    cout << "Please enter department (I for ITE and D for DSE): " ;
    cin >> dept_choice ;

    // Process department choice from the user using switch
    switch(dept_choice) {
        case 'I': {  
            // Ask the user to enter working hours
            cout << "Enter working hours for ITE department:" << endl ;
            for (int i = 0; i < Num_employees; i++) {
                cout << "ITE " << employees[0][i] << ": " ;
                cin >> hours[0][i] ;
           
                // Calculate salary
                if (hours[0][i] <= Normal_working_hours) {
                    salaries[0][i] = hours[0][i] * Rate_per_hour ;
                }
                else {
                    salaries[0][i] = Normal_working_hours * Rate_per_hour + (hours[0][i] - Normal_working_hours) * Overtime_rate ;
                }
            }

            // Display the result 
            cout << "Department ITE:" << endl ;
            // Display the table header
            cout << "-------------------------------------------" << endl ;
            cout << left << setw(20) << "Name" << setw(15) << "Total hours" << setw(12) << "Salary" << endl ;
            cout << "-------------------------------------------" << endl ;

            for (int i = 0; i < Num_employees; i++) {
                cout << left << setw(20) << "ITE " + employees[0][i] << right << setw(8) << hours[0][i] << setw(13) << salaries[0][i] << endl ;
            }
            // Dispaly the table footer
            cout << "-------------------------------------------" << endl ;
            break ;
        }
        case 'D': {  
            // Ask the user to enter working hours
            cout << "Enter working hours for DSE department:" << endl ;
            for (int i = 0; i < Num_employees; i++) {
                cout << "DSE " << employees[1][i] << ": " ;
                cin >> hours[1][i] ;
           
                // Calculate salary
                if (hours[1][i] <= Normal_working_hours) {
                    salaries[1][i] = hours[1][i] * Rate_per_hour ;
                }
                else {
                    salaries[1][i] = Normal_working_hours * Rate_per_hour + (hours[1][i] - Normal_working_hours) * Overtime_rate ;
                }
            }

            // Display the result 
            cout << "Department DSE:" << endl ;
            // Display the table header
            cout << "-------------------------------------------" << endl ;
            cout << left << setw(20) << "Name" << setw(15) << "Total hours" << setw(12) << "Salary" << endl ;
            cout << "-------------------------------------------" << endl ;

            for (int i = 0; i < Num_employees; i++) {
                cout << left << setw(20) << "DSE " + employees[1][i] << right << setw(8) << hours[1][i] << setw(13) << salaries[1][i] << endl ;
            }
            // Display the table footer
            cout << "-------------------------------------------" << endl ;
            break ;
        }
        default:
            cout << "Invalid department entered. Please enter I for ITE or D for DSE." << endl ;
    }

    return 0 ;
}