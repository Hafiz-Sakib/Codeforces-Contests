#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define LI list<int>
#define D(a) (double)(a)
#define vct vector
#define vi vct<int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vvi vct<vi>
#define vll vct<ll>
#define vvll vct<vll>
#define vpii vct<pii>
#define vpll vct<pll>
#define vb vct<bool>
#define vs vector<string>
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define mp(a, b) make_pair(a, b)
#define pb push_back
#define ff first
#define ss second
#define bg begin()
#define UNIQUE(X) (X).erase(unique(all(X)), (X).end())
#define ft cout << "for test" << endl;
#define read(v, a, n)           \
    for (int i = a; i < n; i++) \
        cin >> v[i];
#define For(a, n, in) for (int i = a; i < n; i += in)
#define print(v)           \
    for (auto it : v)      \
        cout << it << ' '; \
    cout << endl;
#define PI acos(-1)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define siz(s) (int)(s.size())
int main()
{
    ll n, k, i, j;
    cin >> n >> k;
    vll ans;
    for (i = 1; sqrt(i) <= n; i++)
    {
        if (n % i == 0)
            ans.pb(i), ans.pb(n / i);
    }
    sort(all(ans));
    UNIQUE(ans);
    (siz(ans) < k) ? cout << -1 << endl : cout << ans[k - 1] << endl;
}
