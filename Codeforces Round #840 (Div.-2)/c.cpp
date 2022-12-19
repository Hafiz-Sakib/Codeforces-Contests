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

    int n, k;
    cin >> n >> k;

    vector<ll> v(n);
    vector<ll> monstr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = accumulate(v.begin(), v.end(), 0);

    for (int i = 0; i < n; i++)
    {
        cin >> monstr[i];
    }

    sort(monstr.begin(), monstr.end());

    ll i = 0;

    while (k > 0)
    {
        ll f = (k * n);
        sum = sum - f;
        if (sum <= 0)
        {
            cout << "YES" << endl;
            break;
        }
        else
        {
            ll b = monstr[i];
            k = k - b;
            i++;
        }
    }

    if (k <= 0)
    {
        cout << "NO" << endl;
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
