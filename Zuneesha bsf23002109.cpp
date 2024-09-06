#include <iostream>
using namespace std;

int main() {
	int numSubjects;
	double grade, totalGradePoints=0.0,cgpa;
	int credits, totalCredits=0;
	cout<<"enter the number of subjects:";
	cin>> numSubjects;
	for (int i=0; i<numSubjects; i++) {
		cout<<"enter grade (on 4.0 scale)for subject" <<i+1<<":";
		cin>> grade;
			cout<<"enter credit hours for the subject"<<i+1<<":";
			cin>> credits;
				
		totalGradePoints += grade*credits;
		totalCredits += credits;
	}
cgpa = totalGradePoints/totalCredits;
    cout<<"your CGPA is: "<< cgpa << endl;
    
	return 0;	
	
}
