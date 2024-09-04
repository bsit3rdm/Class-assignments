#include <iostream>
using namespace std;

// Struct to represent a Subject with grade point and credits
struct Subject {
    double gradePoint;
    int credits;
};

int main() {
    int numSubjects;
    
    // Input: Number of subjects
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    // Create an array of Subject structs
    Subject subjects[numSubjects];

    // Loop to input grade points and credits for each subject
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter grade point for subject " << i + 1 << ": ";
        cin >> subjects[i].gradePoint;

        cout << "Enter credits for subject " << i + 1 << ": ";
        cin >> subjects[i].credits;
    }

    double totalGradePoints = 0.0;
    int totalCredits = 0;

    // Calculate total grade points and total credits
    for (int i = 0; i < numSubjects; i++) {
        totalGradePoints += subjects[i].gradePoint * subjects[i].credits;
        totalCredits += subjects[i].credits;
    }

    // Calculate CGPA
    double cgpa = totalGradePoints / totalCredits;

    // Output: CGPA
    cout << "The CGPA is: " << cgpa << endl;

    return 0;
}
