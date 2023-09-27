#include <iostream>
using namespace std;

int main()
{

    int A[] = {1, 2, 3, 4, 5, 6};

    int sum = 0;
    for (int el : A)
    {
        sum += el;
    }

    cout << sum << endl;
    return 0;
}