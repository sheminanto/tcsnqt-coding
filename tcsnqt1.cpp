#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    pair<int, int> a;
    a.F = 0;
    a.S = 0;
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int dist = 0, mod = 0;

    for (int i = 0; i < n; i++)
    {
        dist += 10;
        mod = i % 5;

        if (mod == 0)
            a.F += dist;
        else if (mod == 1)
            a.S += dist;
        else if (mod == 2)
            a.F -= dist;
        else if (mod == 3)
            a.S -= dist;
        else if (mod == 4)
            a.F += dist;
    }

    cout << a.F << " " << a.S;

    return 0;
}
// Problem Statement
// Our hoary culture had several great persons since time immemorial and king vikramaditya’s nava ratnas (nine gems) belongs to this ilk.They are named in the following shloka:

// Among these, Varahamihira was an astrologer of eminence and his book Brihat Jataak is recokened as the ultimate authority in astrology.

// He was once talking with Amarasimha,another gem among the nava ratnas and the author of Sanskrit thesaurus, Amarakosha.

// Amarasimha wanted to know the final position of a person, who starts from the origin 0 0 and travels per following scheme.

// TCS NQT Coding
// Scheme
// He first turns and travels 10 units of distance
// His second turn is upward for 20 units
// Third turn is to the left for 30 units
// Fourth turn is the downward for 40 units
// Fifth turn is to the right(again) for 50 units
// … And thus he travels, every time increasing the travel distance by 10 units.

// Test Cases
// Case 1
// Input : 3
// Expected Output :-20 20
// Case 2
// Input: 4
// Expected Output: -20 -20
// Case 3
// Input : 5
// Expected Output : 30 -20
// Case 4
// Input : 7
// Expected Output : 90 50