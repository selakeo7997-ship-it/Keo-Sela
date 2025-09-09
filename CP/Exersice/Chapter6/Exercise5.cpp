//A program ask user to enter scores 4subject
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score[4][3]; //4student 3subject 
    int totalscore = 0;

//Get input from user
for (int i=0 ; i<4 ;i++){
    cout << "Enter scores for student" << i+1 << "(Math Physics Chemistry)";
    for (int j=0 ; j<3 ;j++){
        cin >> score[i][j];
    }
}

    // Dislay the table header
    cout << "-------------------------------------------------------------" << endl;
    cout << left << setw(10) << "Name    | " << setw(10)<< "Math   |  " << setw(10) 
         << "Physics | " << setw(10) << "Chemistry |" << "Total" << endl;
    cout << "-------------------------------------------------------------" << endl;

    // Show each student's scores and total
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        cout << left << setw(10) << ("Student " + to_string(i + 1));
        for (int j = 0; j < 3; j++) {
            cout << setw(10) << score[i][j];
            sum += score[i][j];
        }
        cout << sum << endl;
        totalscore += sum;
    }

    // Display the table footer
    cout << "-------------------------------------------------------------" << endl;

    // Diplay the  total score
    cout << right << setw(55) << "Total Score: " << totalscore << endl;

    return 0;
}


