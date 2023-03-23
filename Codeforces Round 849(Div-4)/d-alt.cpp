#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i];
        }

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll k;
            cin >> k;
            ll sum = pref[n];
            sum -= (pref[r] - pref[l - 1]);
            sum += ((r - l + 1LL) * k);
            if (sum % 2LL == 1LL)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
