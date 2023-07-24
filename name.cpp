#include <iostream>

using namespace std;

int main(){
    string name;

    cout<<"May I know your name ?";
    //cin>>name;
    // to get the full name use getline(cin,name)

    getline(cin,name);
    cout<<"Welcome Mr/Mrs "<<name<<endl;
    

    return  0;
}
