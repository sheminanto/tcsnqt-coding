#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string num;
    cout << "Enter a base 17 number : ";
    cin >> num;
    int length = num.length(), dec = 0, val;

    for (int i = 0; i < length; i++)
    {

        if (num[i] >= '0' && num[i] <= '9')

            val = num[i] - 48;
        else if (num[i] >= 'a' && num[i] <= 'z')
            val = num[i] - 87;
        else if (num[i] >= 'A' && num[i] <= 'B')
            val = num[i] - 55;

        dec += (val)*pow(17, length - i - 1);
    }
    cout << "Decimal Equvalent : " << dec;
}