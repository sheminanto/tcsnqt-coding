#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string s;

    // cout << "Enter number : ";
    // cin >> s;
    // cout << s;

    // int x = stoi(s);
    // cout << typeid(x).name() << endl;

    // cout << typeid(s).name();

    // int a = 10;
    // cout << bitset<16>(a).to_string() << endl;

    // /* itoa example */
    // float i;
    // char buffer[33];
    // printf("Enter a number: ");
    // scanf("%f", &i);
    // itoa(i, buffer, 10);
    // printf("decimal: %s\n", buffer);
    // itoa(i, buffer, 16);
    // printf("hexadecimal: %s\n", buffer);
    // itoa(i, buffer, 2);
    // printf("binary: %s\n", buffer);
    // itoa(i, buffer, 9);
    // printf("binary: %s\n", buffer);

    // float n = 70.1;
    // cout << dec << n << '\n';
    // cout << hex << n << '\n';
    // cout << oct << n << '\n';

    int a[] = {11, 10};
    a[1] ^= a[0];
    a[0] ^= a[1];
    a[1] ^= a[0];

    cout << a[0] << " " << a[1];

    return 0;
}