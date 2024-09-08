#include<iostream>
using namespace std;
int main()
{
    int TotalSubjects, CreditHour, TotalCreditHours ;
    float GradePoint, TotalGradePoints, CGPA ;
    
    cout<<"Enter total number of subjects:" ;
    cin>>TotalSubjects ;
    
for(int i=0; i<TotalSubjects ; i++ )
{
    cout<<"Enter GradePoint of Subject"<<i+1<<":" ;
    cin>> GradePoint ;
    
    cout<<"Enter CreditHour of Subject"<<i+1<<":" ;
    cin>> CreditHour ;
    
    TotalGradePoints+= GradePoint*CreditHour ;
    TotalCreditHours+= CreditHour ;
}
    CGPA = TotalGradePoints/TotalCreditHours ;
    cout<<"The CGPA is:"<<CGPA<<endl ;
    
    return 0 ;
}
