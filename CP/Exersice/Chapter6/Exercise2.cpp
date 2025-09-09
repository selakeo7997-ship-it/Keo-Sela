/*
Write the program that finds two points farthest to each other use 2d array
*/

#include <iostream>
using namespace std;
int main (){

    // Declare and initialize a 2D array with 8 coordinate points
float arr[8][2] = {
         {-1,0}, {-1,-1}, {4,1}, {2,0.5}, 
         {3.5,2}, {3,1.5}, {-1.5,4}, {5.5,4}
}; 

// Variables to store the indices of the farthest pair of point 
int arr1 = 0 , arr2 = 1;

// Variable to store the maximum distance squared found so far
float max_distance = 0;

// Use loop through all unique pairs of points
for (int i = 0; i < 8; i++){
    for (int j = i + 1; j < 8;j++) {
        
        // Calculate difference in x and y between point i and point j
        float dx = arr[j][0] - arr[i][0];
        float dy = arr[j][1] - arr[i][1];

        // Calculate squared distance between point i and point y
        float distance_squared = dx * dx + dy * dy ;

        // Update max_distance and point indices of a larger distance is found
        if (distance_squared > max_distance) {
            max_distance = distance_squared ;
            arr1 = i;
            arr2 = j;
        }
    }
}

// Display the farthest points found 
 cout << "The farthest points are : " << endl ;
 cout << "point 1 : (" << arr[arr1][0] << "," << arr[arr1][1] << ")" << endl ;
 cout << "point 2 : (" << arr[arr2][0] << "," << arr[arr2][1] << ")" ;

    return 0;
}