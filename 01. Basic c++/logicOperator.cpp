#include <iostream>

using namespace std;

int main(){

    int age;
    cout<<"Enter the age of person :";
    cin>>age;
    
    if(age>=12 && age<=50){
        cout<<"Young"<<endl;
    }
    else{
        cout<<"old"<<endl;
    }
    if(age<=12 || age>=50){
        cout<<"eligible for the offer";

    }
    else{
        cout<<"Not eligible for the offer"<<endl;
    }
    return 0;
    

}