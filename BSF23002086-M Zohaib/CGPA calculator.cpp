#include<iostream>
#include<iomanip>
using namespace std;

float sum(float arr[],int n ){
	float sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}
float calculate(float score,float hr){
	
	return score*hr;
}
float result(float score[],float credit_hours[],int n){
	float res=0;
	for(int i=0;i<n;i++){
		cout<<"Enter Score: "<<endl;
		cin>>score[i];
		cout<<"Enter Credit hours: "<<endl;
		cin>>credit_hours[i];
		res+=calculate(score[i],credit_hours[i]);
	}
	return res;
}
int main(){
	int n;
	cout<<"Please Enter number of subjects: "<<endl;
	cin>>n;	
	float score[n];
	float credit_hours[n];
	
	cout<<"CGPA: "<<setprecision(3)<<result(score,credit_hours,n)/sum(credit_hours,n);
	return 0;
}
