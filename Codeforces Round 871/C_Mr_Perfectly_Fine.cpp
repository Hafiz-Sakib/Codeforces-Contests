// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

typedef vector<ll> vi;
typedef vector<string> vs;

#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");
#define setp(n) fixed << setprecision(n)

const double eps = 1e-12;
const int mx = 1e8 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n, x, y, z, k, res;
    cin >> n;
    z = y = x = INT_MAX;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> k >> s;
        if (s == "01")
        {
            x = min(x, k);
        }
        else if (s == "10")
        {
            y = min(y, k);
        }
        else if (s == "11")
        {
            z = min(z, k);
        }
    }
    if (x == INT_MAX || y == INT_MAX)
    {
        res = min(INT_MAX, z);
    }
    else
    {
        res = min(x + y, z);
    }
    if (res == INT_MAX)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << res << endl;
        return;
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
