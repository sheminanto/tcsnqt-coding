#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{

    string s;
    cout << "Enter a number of maximum 100 digits : ";
    cin >> s;
    int len = s.length();
    ll a = 0, b = 0;

    for (int i = 0; i < len; i++)
    {

        if ((i + 1) % 2 == 0)
            a += s[i] - '0';
        else
            b += s[i] - '0';
    }
    cout << "difference : " << abs(a - b);
}
