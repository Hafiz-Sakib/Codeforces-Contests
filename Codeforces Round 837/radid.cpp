/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

int main()
{
    Boost;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll mi_c = 0, ma_c = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[0] == a[i])
            {
                mi_c++;
            }
            if (a[n - 1] == a[i])
            {
                ma_c++;
            }
        }
        if (a[0] != a[n - 1])
        {
            cout << 2 * mi_c * ma_c << endl;
        }
        else
        {
            cout << (n * (n - 1)) << endl;
        }
    }

    return 0;
}
