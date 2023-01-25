/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    string s, p, r;
    cin >> s >> p;
    swap(s[0], s[1]);
    if (s.size() > 2 && p.size() > 2)
    {
        sort(s.begin() + 2, s.end());
        sort(p.begin() + 2, p.end());
    }
    if (p == s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Boost;

    int t = 1;
    while (t--)
    {
        Boom();
    }

    return 0;
}
