// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
typedef pair<string, ll> psi;
typedef pair<ll, string> pis;
typedef pair<double, double> pdd;
typedef map<ll, ll> mii;
typedef map<ll, bool> mib;
typedef map<string, ll> msi;
typedef map<ll, string> mis;
typedef set<ll> si;
typedef set<string> ss;
typedef set<double> sd;
typedef priority_queue<ll> pq;
typedef priority_queue<string> pqs;
typedef priority_queue<ll, vi, greater<ll>> pqg;

typedef vi::iterator vit;
typedef set<int>::iterator sit;

typedef tree<ll, null_type, less<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    greater_set;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    multi_set;
typedef tree<ll, null_type, greater_equal<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    greater_multi_set;

#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define fi first
#define se second
#define space ' '
#define endl "\n"
#define lb lower_bound
#define ub upper_bound

#define mid(l, r) ((r + l) / 2)
#define left(node) (node * 2)
#define right(node) (node * 2 + 1)
#define mx_int_prime 999999937

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()
#define sz(x) (int)x.size()
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.end(), 0)
#define vecCount(data, key) count(data.begin(), data.end(), key)
#define Reverse(data) reverse(data.begin(), data.end())

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"

#define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper)
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define FOR(data) for (auto it = data.begin(); it != data.end(); it++)
#define setp(n) fixed << setprecision(n)
#define mem(arr, val) memset(arr, val, sizeof(arr));
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define sqr(a) ((a) * (a))
#define MOD 1000000007

const double PI = acos(-1);
const int mx = 1e8 + 123;
const double eps = 1e-12;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

ll Find(ll n, ll m, vector<vi> &a)
{
    vector<vector<bool>> lakes(n, vector<bool>(m, 0));
    ll maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > 0 && !lakes[i][j])
            {
                ll volume = 0;
                queue<pii> q;
                q.push({i, j});
                lakes[i][j] = 1;
                while (!q.empty())
                {
                    ll x, y;
                    tie(x, y) = q.front();
                    q.pop();
                    volume += a[x][y];

                    for (int k = 0; k < 4; k++)
                    {
                        ll nx = x + dx[k], ny = y + dy[k];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] > 0 && !lakes[nx][ny])
                        {
                            q.push({nx, ny});
                            lakes[nx][ny] = 1;
                        }
                    }
                }
                maxi = max(maxi, volume);
            }
        }
    }
    return maxi;
}

void Boom(int t)
{
    int n, m;
    cin >> n >> m;
    vector<vi> a(n, vi(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << Find(n, m, a) << endl;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom(t);
    }

    return 0;
}