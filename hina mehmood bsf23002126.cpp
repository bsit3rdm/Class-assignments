#include<iostream>
using namespace std;

int main() {
    int numSubjects;
    float creditHours, gradePoint, totalCreditHours = 0, totalWeightedPoints = 0;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    for (int i = 0; i < numSubjects; i++) {
        cout << "\nEnter the credit hours for subject " << i+1 << ": ";
        cin >> creditHours;
        cout << "Enter the grade point for subject " << i+1 << ": ";
        cin >> gradePoint;
        totalWeightedPoints += creditHours * gradePoint;
        totalCreditHours += creditHours;
    }
    float CGPA = totalWeightedPoints / totalCreditHours;
    cout << "\nYour CGPA is: " << CGPA << endl;
    return 0;
}
