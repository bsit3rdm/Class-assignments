#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    double grade, totalGradePoints = 0.0, cgpa;
    int credits, totalCredits = 0;

    // Ask for number of subjects
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    // Loop to input grade and credit hours for each subject
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter grade (on 4.0 scale) for subject " << i + 1 << ": ";
        cin >> grade;
        cout << "Enter credit hours for subject " << i + 1 << ": ";
        cin >> credits;

        totalGradePoints += grade * credits; // Calculate total grade points
        totalCredits += credits;             // Calculate total credits
    }

    // Calculate CGPA
    cgpa = totalGradePoints / totalCredits;

    // Output CGPA
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
