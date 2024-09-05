#include<iostream>
using namespace std;
float Sub_GPA,Weighted_credit,GPA;
int Cr_Hr,T_Cr_Hr;
int GPA_Calculator(){
    cout<<"\n GPA =";
    cin>>Sub_GPA;
    cout<<"Credit Hours =";
    cin>>Cr_Hr;
    Weighted_credit=Sub_GPA*Cr_Hr;
    GPA+=Weighted_credit;
    T_Cr_Hr+=Cr_Hr;
    return GPA,T_Cr_Hr;
}

int main(){
    int Total_Sub;
    cout<<"Enter Num of Subjects : ";
    cin>>Total_Sub;
    for(int i=0; i<Total_Sub; i++){
        cout<<"\n Subject " <<i+1;
        GPA_Calculator();
    }
    cout<<"CGPA = "<<GPA/T_Cr_Hr;

    return 0;
}