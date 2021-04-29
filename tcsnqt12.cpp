#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {12, 1, 4, 23, 67, 43};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min = 0;
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < (len - 1); i++)
    {
        min = i;

        for (int j = (i + 1); j < len; j++)
            if (arr[j] < arr[min])
            {

                arr[j] ^= arr[min];
                arr[min] ^= arr[j];
                arr[j] ^= arr[min];
            }
    }

    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
}