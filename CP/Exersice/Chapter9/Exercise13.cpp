/*
Write a method called triangle_calculator that accepts the three sides, a, b and c, of a triangle, 
and returns the perimeter and area. 
*/

#include <iostream>
#include <cmath> // use for sqrt 
using namespace std;

// Function to calculate parimeter 
float Calculte_parimeter_of_triangle(float a, float b, float c){
    return a + b + c ;
}

// Function to calculate area
float Calculate_area_of_triangle(float a, float b, float c){
    
    //  Calculte the semi pparimeter 
    float s = (a + b + c) / 2.0 ;

    return sqrt(s * (s-a) * (s-b) * (s-c)) ;
}

int main(){

    float a, b, c ;

    // input the value a, b, c by the user
    cout << "Please enter the side of a : " ; cin >> a ;
    cout << "Please enter the side of b : " ; cin >> b ;
    cout << "Please enter the side of c : " ; cin >> c ;

    // Display the result 
    cout << "The result of parimeter is : " << Calculte_parimeter_of_triangle(a,b,c) << endl ;
    cout << "The result of area is : " << Calculate_area_of_triangle(a,b,c) ; 

    return 0;
}