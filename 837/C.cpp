#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cn = 0;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(v[i], v[j]) != 1)
                    cn = 1;
            }
        }
        if (cn)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}