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
typedef pair<string, ll> psi;
typedef pair<ll, string> pis;
typedef pair<double, double> pdd;
typedef map<ll, ll> mii;
typedef map<ll, bool> mib;
typedef map<string, ll> msi;
typedef map<ll, string> mis;
typedef set<ll> si;
typedef set<char> sc;
typedef set<string> ss;
typedef set<double> sd;
typedef queue<ll> qu;
typedef queue<pii> qupii;
typedef priority_queue<ll> pq;
typedef priority_queue<pii> pqpii;
typedef priority_queue<string> pqs;
typedef priority_queue<ll, vi, greater<ll>> pqg;

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

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

#define left(node) (node * 2)
#define mid(l, r) ((r + l) >> 1)
#define right(node) (node * 2 + 1)

#define b() begin()
#define e() end()
#define sz(x) (int)x.size()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()
#define Reverse(data) reverse(data.begin(), data.end())
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.end(), 0)
#define vecCount(data, key) count(data.begin(), data.end(), key)

#define setp(n) fixed << setprecision(n)
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem(arr, val) memset(arr, val, sizeof(arr));
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define FOR(data) for (auto it = data.begin(); it != data.end(); it++)
#define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper)

#define yes cout << "Yes\n"
#define no cout << "No\n"
#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define sqr(a) ((a) * (a))
#define mod 1000000007
#define mx_int_prime 999999937

const double PI = acos(-1);
const int mx = 1e8 + 123;
const double eps = 1e-12;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

/*

// Chess moves.........

// Up-down, Left-Right
int dx[] = {+0, +0, -1, +1};
int dy[] = {+1, -1, +0, +0};

// King's Move
int dx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int dy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

// Knight's Move
int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

*/

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
bool vis[123][123];
int row, column;
bool valid(int x, int y)
{
    return (x >= 0 and x < row and y >= 0 and y < column and !vis[x][y]);
}

void bfs(int source_x, int source_y)
{
    queue<pair<int, int>> q;
    q.push({source_x, source_y});
    vis[source_x][source_y] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int next_x = x + dx[i];
            int next_y = y + dy[i];
            if (valid(next_x, next_y))
            {
                vis[next_x][next_y] = 1;
                q.push({next_x, next_y});
            }
        }
    }
}

void quuuuue()
{
    pqg q;
    q.push(4);
    q.push(40);
    q.push(400);
    while (!q.empty())
    {
        cout << q.top() << " ==> "
             << " ";
        q.pop();
    }
}
void Boom()
{
    int n;
    string s;
    cin >> n >> s;
    int cntq = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'Q')
        {
            cntq++;
        }
        else
        {
            cntq--;
            if (cntq < 0)
            {
                cntq = 0;
            }
        }
    }

    (!cntq) ? yes : no;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        // cout<<"Case "<<t<<" : ";
        Boom();
    }

    return 0;
}