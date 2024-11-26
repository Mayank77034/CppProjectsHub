#include<iostream>
using namespace std;
int main(){
    int grade_point1,grade_point2,grade_point3,credit1,credit2,credit3;
    cout<<"enter the value of grade_point1:";
    cin >>grade_point1;
    cout<<"enter the value of grade_point2:";
    cin>>grade_point2;
    cout<<"enter the value of grade_point3:";
    cin>>grade_point3;
    cout<<"enter the value of credit1:";
    cin >>credit1;
    cout<<"enter the value of credit2:";
    cin>>credit2;
    cout<<"enter the value of credit3:";
    cin>>credit3;
    double total1 = (grade_point1*credit1)+(grade_point2*credit2)+(grade_point3*credit3);
    cout<<"the total of Grade Points multiplied by Credits:"<<total1;
    int total2 = credit1+credit2+credit3;
    cout<<"the total credit is :"<<credit1+credit2+credit3;
    cout<<"the CGP will be :"<<total1/total2;
    return 0;


}