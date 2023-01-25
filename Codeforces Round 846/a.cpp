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
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> r;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = v[0], k = v[0];
    r.push_back(k);
    for (ll i = 1; i < n; i++)
    {
        if (k & 1)
        {
            if (v[i] % 2 == 0)
            {
                r.push_back(v[i]);
            }
            if (r.size() == 3)
            {
                break;
            }
        }
        else
        {
            if (v[i] & 1)
            {
                r.push_back(v[i]);
            }
            if (r.size() == 3)
            {
                break;
            }
        }
    }
    if (r.size() != 3)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (auto u : r)
        {
            cout << u << " ";
        }
        cout << endl;
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
