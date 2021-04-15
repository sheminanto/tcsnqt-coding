#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1 = 1, a2 = 1, r1 = 2, r2 = 3;
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int result;
    if (n % 2 == 0)
        result = a2 * pow(r2, (n - 1) / 2);

    else
        result = a1 * pow(r1, (n - 1) / 2);

    cout << "Result : " << result;
}