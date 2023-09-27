#include <iostream>

using namespace std;

int main()
{

    int tableNumber;
    cout << "Enter the Table number :";
    cin >> tableNumber;
    if (tableNumber > 1)
    {

        for (int i = 1; i <= 10; i++)
        {
            cout << tableNumber << " * " << i << " = " << tableNumber * i << endl;
        }
    }
    else
    {
        cout << "enter the valid number !!!";
    }
}