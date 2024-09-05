#include<iostream>
using namespace std;
int main(){
int numsubject;
float gradepoints, credithours, CGPA, totalgradepoints=0.0, totalcredithours=0.0;

cout<<"enter no of subjects="<<endl;
cin>>numsubject;
for(int i=0;i<numsubject;i++) {
cout<<"enter gradepoints for subject"<<i+1<<":"<<endl;
cin>>gradepoints;
cout<<"enter credithours for subject"<<i+1<<":"<<endl;
cin>>credithours;
totalgradepoints+=gradepoints*credithours;
totalcredithours+=credithours;
}

CGPA=(totalgradepoints)/(totalcredithours);
cout<<"The CGPA is ="<<CGPA<<endl;
return 0;
}
