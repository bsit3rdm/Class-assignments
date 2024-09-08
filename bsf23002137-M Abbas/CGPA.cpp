#include<iostream>
#include <vector>
#include <conio.h> // For system("cls") and exit()
 // For getch() - Optional for some compilers
using namespace std;

void calculateGPA() {
    int numOfsubj;
    system("cls");
    
    cout << "-------------------------------------------------" << endl;
    cout << "|               GPA Calculator                  |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Enter the number of subjects: ";
    cin >> numOfsubj;

    double credits[numOfsubj];
    double points[numOfsubj];
    double sum = 0;  // Sum of total points
    double totalCredits = 0;

    // Loop to input credits and points for each subject
    for (int i = 0; i < numOfsubj; i++) {
        cout << "Credits for subject " << i + 1 << ": ";
        cin >> credits[i];
        cout << "Points for subject " << i + 1 << ": ";
        cin >> points[i];
        cout << "-------------------------------------------------" << endl;
    }

    // Calculating total points and total credits
    for (int i = 0; i < numOfsubj; i++) {
        sum += points[i] * credits[i];  // Accumulate total points
        totalCredits += credits[i];     // Accumulate total credits
    }

    // Output the results
    cout << "\nTotal points: " << sum << endl;
    cout << "Total credits: " << totalCredits << endl;

    if (totalCredits > 0) {
        cout << "Total GPA: " << sum / totalCredits << endl;
    } else {
        cout << "Error: Total credits cannot be zero!" << endl;
    }

    cout << "\nPress any key to go back to the main menu...";
    getch();  // Wait for user input to proceed
    cout << "-------------------------------------------------" << endl;
}

// 2nd func
void calculateCGPA() {
    int numOfsem;
    system("cls");
    cout << "-------------------------------------------------" << endl;
    cout << "|               CGPA Calculator                 |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Enter the number of semesters: ";
    cin >> numOfsem;

    double semesterpo[numOfsem];  // Correctly declare the array for semester GPAs
    double semtotal = 0;  // Accumulate total CGPA of all semesters

    // Line 60: Correct the array index to start from 0
    for (int i = 0; i < numOfsem; i++) {
        cout << "Enter the GPA for semester #" << (i + 1) << ": ";
        cin >> semesterpo[i];  // Line 64: Correct the array name to 'semesterpo'
    }

    // Line 66: Sum up CGPA for all semesters correctly
    for (int i = 0; i < numOfsem; i++) {
        semtotal += semesterpo[i];
    }

    cout << "Your CGPA: " << semtotal / numOfsem << endl;  // Calculate the average CGPA
    cout << "\nPress any key to go back to the main menu...";
    getch();
}


// 3rd func
void instruction() {
    system("cls"); // Clear the screen
    cout << endl << endl;
    cout << " How to Calculate GPA and CGPA??" << endl;
    cout << "-------------------------------------------------" << endl << endl;
    cout << "GPA = sum of (credits * point) / total no of credits" << endl;
    cout << "CGPA = sum of GPA / total no of semesters\n\n" << endl;
    cout << " Grade Point Table:" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "\t Grade\t\t 4.0 " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "\t A+\t\t 4.0\n";
    cout << "\t A\t\t 3.8\n";
    cout << "\t B+\t\t 3.6\n";
    cout << "\t B\t\t 3.5\n";
    cout << "\t C+\t\t 3.3\n";
    cout << "\t C\t\t 3.0\n";
    cout << "\t D+\t\t 2.8\n";
    cout << "\t D\t\t 2.5\n";
    cout << "\t E\t\t 2.0\n";
    cout << "\t F\t\t below 2.0 " << endl;

    cout << "\n Press any key to go back to the main menu...\n";
    cout << "-------------------------------------------------" << endl;
    getch(); // Pause to let the user read the instructions
}

int main() {
    char op = 0;

    do {
        system("cls"); // Clear the screen
        cout << "-------------------------------------------------" << endl;
        cout << "|                GPA Calculator                  " << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "1. Calculate GPA " << endl;
        cout << "2. Calculate CGPA" << endl;
        cout << "3. How to Calculate GPA?" << endl;
        cout << "4. Quit" << endl << endl;

        cin >> op;

        if (op == '1') calculateGPA();
        else if (op == '2') calculateCGPA();
        else if (op == '3') instruction();
        else if (op == '4') exit(0);
        else cout << "Invalid option. Please try again.\n";

    } while (1);

    return 0;
}
