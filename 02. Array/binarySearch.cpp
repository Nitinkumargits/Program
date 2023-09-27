#include <iostream>

using namespace std;

int main()
{

    double arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int len = sizeof(arr) / sizeof(arr[0]);

    int l = 0, h = len - 1, key, mid;

    cout << "Enter the key to find :- ";
    cin >> key;

    while (l <= h)
    {
        mid = (l + h) / 2;

        if (key == arr[mid])
        {
            cout << "Found the key at index " << mid;
            return 0;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "NOT found the key ? ";
}