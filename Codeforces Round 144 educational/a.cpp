/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    ll k;
    string s;
    cin >> k >> s;
    // string fb = "FBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFBFBFFBFFBFB";
    string fb = "";
    for (int i = 1; i < 50; i++)
    {
        if (i % 3 == 0)
        {
            fb += "F";
        }
        if (i % 5 == 0)
        {
            fb += "B";
        }
        if ((i % 5 == 0) && (i % 3 == 0))
        {
            fb += "F";
            fb += "B";
        }
    }
    if (fb.find(s) != string::npos)
    {
        yes;
    }
    else
    {
        no;
    }
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
