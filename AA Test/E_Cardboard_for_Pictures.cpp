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
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vpii;
typedef vector<pair<string, ll>> vpsi;
typedef pair<ll, ll> pii;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef set<ll> si;
typedef set<char> sc;
typedef set<string> ss;

#define pb push_back
#define mp make_pair
#define in insert
#define fi first
#define se second
#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.end(), 0)

#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper)

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define mod 1000000007
const int mx = 1e8 + 123;
const double eps = 1e-12;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

ll n, area;
vi v(1e6);

bool possible(ll w)
{
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        ll side = (2 * w) + v[i];
        ll new_area = side * side;
        total += new_area;
        if (total > area)
        {
            return 0;
        }
    }
    return 1;
}

void Boom()
{
    cin >> n >> area;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll first = 0, last = 1e10, mid, ans;
    while (first <= last)
    {
        mid = (first + last) >> 1;
        if (possible(mid))
        {
            ans = mid;
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    cout << ans << endl;
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
