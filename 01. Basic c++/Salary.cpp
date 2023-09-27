#include <iostream>
using namespace std;

int main(){

    float basic_Salary;
    float percentage_Allowances;
    float percentage_Deduction;
    float Net_Salary;


    cout<<"Enter the Basic Salary:-";
    cin>>basic_Salary;
    cout<<"Enter the Percentage allowance:-";
    cin>>percentage_Allowances;
    cout<<"Enter the Percentage Deduction:-";
    cin>>percentage_Deduction;

    Net_Salary=basic_Salary+ (basic_Salary*(percentage_Allowances/100))-(basic_Salary*(percentage_Deduction/100));

    cout<<"your Net-Salary is:= "<<Net_Salary<<endl;
    return 0;
}