/*

string author;
author = Hafiz_Sakib;

*/
// https://toph.co/arena?practice=63caa69f450e97886692bd40#!/p/63c9770aad35aa1e815905d7

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
    ll n, x, y, w, tt = 0;
    cin >> n >> x >> y >> w;
    ll t = n;

    while (n > 0)
    {
        if (n >= x)
        {
            n = n - x;
            tt = tt + x;
            if (n > 0)
            {
                tt = tt + y;
                n = n + w;
            }
        }
        else
        {
            tt = tt + n;
            n = n - n;
        }
        if (n > t)
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << tt << endl;
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
