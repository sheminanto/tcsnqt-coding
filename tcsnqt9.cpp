#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<int, ll> a;
ll temp;

ll fib(int n)
{
    if (n <= 1)
        return n;
    else if (a[n])
        return a[n];
    else
    {
        temp = fib(n - 1) + fib(n - 2);
        a[n] = temp;
        return temp;
    }
}

int prime(int n)
{
    int max = 1000000, count = 0, flag, i;

    for (i = 2; i < max; i++)
    {
        int flag = 0;
        for (int j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count += 1;
            if (count >= n)
                break;
        }
    }
    return i;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n % 2 == 0)
        cout << prime((n / 2));

    else
        cout << fib((n / 2) + 1);
}
