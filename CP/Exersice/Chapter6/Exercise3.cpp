// The program is calculates the total working hours and the weekly salary for each employee 
#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    // Contant salry for calculation 
    int Normal_hours_limit = 30 ;
    int Normal_rate = 5 ;
    int Overtime_rate = 10 ;
    int Number_employees = 6 ;
    int Number_days = 7 ;

    // Store the employee names
    string employeeNames [Number_employees] = {
        "Employee 1", "Employee 2", "Employee 3", "Employee 4", "Employee 5", "Employee 6"
    }; 

    // To store worker 
    int workHours[Number_employees][Number_days] = {
        {0, 5, 8, 3, 2, 7, 3},
        {5, 2, 3, 2, 4, 2, 2},
        {7, 6, 2, 3, 8, 7, 6},
        {4, 7, 8, 5, 7, 2, 8},
        {2, 4, 3, 6, 4, 6, 7},
        {6, 5, 8, 6, 7, 5, 4}  
    } ;

    // Display the table header 
    cout << "+----------+-------------+--------+" << endl ;
    cout << "| Name     | Total Hours | Salary |" << endl ;
    cout << "+----------+-------------+--------+" << endl ;

    // Loop each employee 
    for ( int i = 0; i < Number_employees; i++){
        int totalHours = 0 ;

        // Hours worked for a week 
        for (int j = 0; j < Number_days; j++){
            totalHours += workHours[i][j] ;
        }
        
        // Calculate salary 
        int salary;
        if ( totalHours <= Normal_hours_limit){

            // Caluclate with normal rate 
            salary = totalHours * Normal_rate ;
        } else {

            // Calculate with overtime 
            salary = Normal_hours_limit * Normal_rate + ( totalHours - Normal_hours_limit ) * Overtime_rate ;
        }

        //Display the data in tabular 
        cout << "|" << left << setw(10) << employeeNames[i] << " | " 
             << right << setw (11) << totalHours << " | "
             << setw(6) << salary << " |" << endl ;
    }

    // Display the table footer 
    cout << "+----------+-------------+--------+" ;
    return 0 ;
}