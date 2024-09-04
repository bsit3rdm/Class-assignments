#include <iostream>
using namespace std;
int creditHours,totalCrHr=0;
	float credits, totalCredits=0;
	int marks;
	float gp,gpa;
	void subjViseCredits()
{
	cout << "Enter your marks: ";
	cin >> marks;
	cout << "Enter your credit hours: ";
	cin >> creditHours;
	if (marks >= 50 && marks <= 90)
	{
		gp = (marks - 50) * 0.05 + 2;
		credits = gp * creditHours;
		
	}
	else if(marks>90 && marks<=100){
		credits=4*creditHours;
	}
	else if(marks<50 && marks>=0){
		cout<<"\nOops!You failed this subject!";
	}
		totalCredits+=credits;
		totalCrHr+=creditHours;
}



int main()
{
	int i,subjects;
	cout<<"Enter The number of subjects (3-7): ";
	cin>>subjects;	
	for( i=1; i<=subjects; i++){
		cout<<"\n\nEnter Marks for subj "<<i<<endl;
		subjViseCredits();
	}
		gpa=totalCredits/totalCrHr;
		cout<<"GPA: "<<gpa;
	return 0;
}
