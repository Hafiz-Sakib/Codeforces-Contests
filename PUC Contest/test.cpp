/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
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
    string s, r = "";
    cin >> s;
    ll cnt = 1, x = 1;
    if (s.size() <= 3)
    {
        cout << s << endl;
        return;
    }
    else
    {
        for (auto u : s)
        {
            if (x)
            {
                r += u;
                r += ',';
                x = 0;
                continue;
            }
            if (cnt < 4)
            {
                r += u;
                cnt++;
            }
            else if (cnt == 4)
            {
                r += ',';
                r += u;
                cnt = 1;
            }
        }
    }
    cout << r << endl;
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
