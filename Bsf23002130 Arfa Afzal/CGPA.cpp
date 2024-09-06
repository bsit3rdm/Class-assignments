#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    double totalCreditPoints = 0;
    int totalCreditHours = 0;

    for (int i = 0; i < numSubjects; i++) {
        double marks, creditHours;
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks;
        cout << "Enter credit hours for subject " << i + 1 << ": ";
        cin >> creditHours;

        double gp;
        if (marks >= 50 && marks <= 90) {
            gp = (marks - 50) * 0.05 + 2; // Updated GP formula
        } else if (marks > 90) {
            gp = 4;
        } else {
            cout << "No GP, failed subject!" << endl;
            continue;
        }

        double creditPoints = gp * creditHours;
        cout << "GP: " << gp << ", Credit Points: " << creditPoints << endl;

        totalCreditPoints += creditPoints;
        totalCreditHours += creditHours;
    }

    double gpa = totalCreditPoints / totalCreditHours;
    cout << "GPA: " << gpa << endl;

    return 0;
}
