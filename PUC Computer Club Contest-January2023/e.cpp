// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void Boom()
{
    ll n, cnt = 0;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (auto u : v)
    {
        mp[u]++;
    }

    for (auto u : mp)
    {
        if (u.first == u.second)
        {
            continue;
        }
        else
        {
            if (u.first > u.second)
            {
                cnt += u.second;
            }
            else
            {
                cnt += (u.second - u.first);
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    Boost;

    int t = 1;

    while (t--)
    {
        // cout<<"Case "<<t<<" : ";
        Boom();
    }

    return 0;
}
