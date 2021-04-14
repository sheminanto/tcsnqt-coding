#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<string> s = {
        "var",
        "break",
        "case",
        "continue",
        "default",
        "defer",
        "else",
        "for",
        "func",
        "goto",
        "if",
        "map",
        "range",
        "return",
        "struct",
        "type"};

    string input;
    cout << "\nEnter a string : ";
    cin >> input;
    if (s.find(input) != s.end())
        cout << input << " is a keyword\n";
    else
        cout << input << " is not a keyword";
}
