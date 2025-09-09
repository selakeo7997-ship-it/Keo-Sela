//Group 9
//Write  a  program  that  sorts  an  2D  array  of  points  on  their y-coordinates.
#include <iostream>
using namespace std;
int main(){
    
    // Sample data: 5 points with x and y coordinates
    int points[6][2] = {
        {4,  2},  
        {1,  7},  
        {4,  5},  
        {1,  2},  
        {1,  1},  
        {4,  1}
    };

    // Bubble sort by y-coordinate (index 1)
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (points[j][1] > points[j + 1][1]) {
                // Swap the entire point (x and y)
                int tempX = points[j][0];
                int tempY = points[j][1];
                points[j][0] = points[j + 1][0];
                points[j][1] = points[j + 1][1];
                points[j + 1][0] = tempX;
                points[j + 1][1] = tempY;
            }
        }
    }

    // Print sorted points
    cout << "Sorted points by y-coordinate:\n";
    for (int i = 0; i < 5; i++) {
        cout << "(" << points[i][0] << ", " << points[i][1] << ")\n";
    }
 
    return 0; 
}