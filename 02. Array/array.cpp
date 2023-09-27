#include <iostream>
using namespace std;
int main()
{

    // int A[6] = {1, 2, 3, 4, 5, 6};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << endl;
    // }

    ///////////////////////////////////////
    /*NOT intialize array return GARBAGE*/
    // int B[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     // cout << B[i] << endl;
    // }

    /*ForEach loop*/

    // char c[] = {'A', 66, 'C', 68, 'E'};

    // for (auto x : c)
    // {
    //     // cout << x << " ";
    // }

    ///////////////////////////////////////////

    int D[] = {1, 2, 3, 4, 5};

    for (int &el : D)
    {
        cout << ++el << " ";
    }
    cout << endl;
    for (int x : D)
    {
        cout << x << " ";
    }
}