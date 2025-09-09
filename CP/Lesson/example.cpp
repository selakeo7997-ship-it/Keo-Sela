#include <iostream>
#include <cmath> // Use for sin(c)
using namespace std;

float triangle_calculate(float a,float b,float c){
    float c_radian = c * M_PI / 180.0 ;
    return 0.5 * a * b * sin(c_radian);
}

int main(){

    float a, b, c ;

    // Please user input the value of a, b and c
    cout << "Please enter the value of a : " ; cin >> a ;
    cout << "Please enter the valur of b : " ; cin >> b ;
    cout << "Please enter the value of c : " ; cin >> c ;

    cout << "The area of the triangle is : "<< triangle_calculate(a, b, c) ;

    return 0;
}