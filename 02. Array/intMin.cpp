/*Why we use the INT_MIN instead of Zero .*/

#include <iostream>
using namespace std;

int main()
{

    int A[] = {-2, -3, -4, -5, -6, -7};
    int len = sizeof(A) / sizeof(A[0]);
    int max = INT32_MAX;
    cout << "max int" << max << endl;
    for (int i = 0; i < len - 1; i++)
    {

        if (A[i] < max)
        {
            max = A[i];
        }
    }

    cout << "Max " << max;
}