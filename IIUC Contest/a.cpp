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
    string s; // 04-11-2000
    ll sum = 0;
    cin >> s;
    for (auto u : s)
    {
        if (u == '-')
        {
            continue;
        }
        else
        {

            sum += (u - '0');
        }
    }
    cout << sum << endl;
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
