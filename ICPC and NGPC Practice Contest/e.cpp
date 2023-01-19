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
    int n, T;
    cin >> n >> T;
    vector<ll> v(n);

    ll time, ans = 0;

    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] >= T)
        {
            ans += T;
        }
        else
        {
            ans += v[i + 1] - v[i];
        }
    }

    ans += T;

    cout << ans << endl;
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
