


#include<iostream>
using namespace std;

int main() {
    int numSubjects;
    float creditHours, gradePoint, totalCreditHours = 0, totalWeightedPoints = 0;

    // Taking input for number of subjects
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    // Looping through each subject to get credit hours and grade points
    for (int i = 0; i < numSubjects; i++) {
        cout << "\nEnter the credit hours for subject " << i+1 << ": ";
        cin >> creditHours;

        cout << "Enter the grade point for subject " << i+1 << ": ";
        cin >> gradePoint;

        // Calculating total weighted grade points and total credit hours
        totalWeightedPoints += creditHours * gradePoint;
        totalCreditHours += creditHours;
    }

    // Calculating CGPA
    float CGPA = totalWeightedPoints / totalCreditHours;

    // Displaying the result
    cout << "\nYour CGPA is: " << CGPA << endl;

    return 0;
}

