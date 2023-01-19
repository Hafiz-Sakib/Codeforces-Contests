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
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> r(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int j = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        r[j] = v[i--];
        if (i >= 0)
        {
            r[n - 1 - j] = v[i];
        }
        j++;
    }

    for (auto u : r)
    {
        cout << u << " ";
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
