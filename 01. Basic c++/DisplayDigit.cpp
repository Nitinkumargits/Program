#include <iostream>
using namespace std;

int main()
{
    int r, n;
    cout << "enter the n :";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        n = n % 10;
        cout << r << endl;
    }
    return 0;
}
