#include<iostream>
using namespace std;

class GPACalculator{
    private:
        float marks;
        int credithours, totalCH = 0;
        float credit, totalC = 0;
        float gp, GPA;

    public:

        void Input(){
            cout<<"Marks : ";
            cin>>marks;
            cout<<"Credit hours : ";
            cin>>credithours;
            
        }

        void Calculate(){
            if (marks >= 50 && marks <= 90){
		        gp = (marks - 50) * 0.05 + 2;
		        credit = gp * credithours;
		        totalC+=credit;
		        totalCH+=credithours;
            }
	        else if(marks>90 && marks<=100){
		        credit=4*credithours;
	        }
	        else if(marks<50 && marks>=0){
		        cout<<"\nOops!You failed this subject!";
	        }
		    totalC+=credit;
		    totalCH+=credithours;
        }

        void Display(){
            GPA=totalC/totalCH;
		    cout<<"GPA: "<<GPA;
        }
        
};

int main(){

    GPACalculator object;
    int sub;
    cout<<"Enter number of subjects : ";
    cin>>sub;
    for(int i=0; i<sub; i++){
        cout<<"Subject "<<i+1<<" : "<<endl;
        object.Input();
        object.Calculate();
    }
    object.Display();
    
    return 0;
}