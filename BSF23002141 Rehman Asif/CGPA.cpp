#include <iostream>
using namespace std;
int main() {
    int numSubjects, marks, creditHours;
    float totalGradePoints = 0, totalCreditHours = 0, gpa;
    cout << "Enter the number of subjects (3-7): ";
    cin >> numSubjects;
    for (int i = 1; i <= numSubjects; i++) {
        cout << "\nEnter marks for subject " << i << " (0-100): ";
        cin >> marks;
        cout << "Enter credit hours for subject " << i << ": ";
        cin >> creditHours;  
        float gradePoints;
        if (marks >= 90)
            gradePoints = 4.0;
        else if (marks >= 80)
            gradePoints = 3.7;
        else if (marks >= 70)
            gradePoints = 3.0;
        else if (marks >= 60)
            gradePoints = 2.7;
        else if (marks >= 50)
            gradePoints = 2.0;
        else {
            gradePoints = 0.0;
            cout << "You failed this subject.\n";
        }
        totalGradePoints += gradePoints * creditHours;
        totalCreditHours += creditHours;
    }
    if (totalCreditHours > 0) {
        gpa = totalGradePoints / totalCreditHours;
        cout << "\nYour GPA is: " << gpa << endl;
    } else {
        cout << "\nInvalid input. No valid credit hours entered." << endl;
    }

    return 0;
}
