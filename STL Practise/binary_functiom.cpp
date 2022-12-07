// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

typedef vector<ll int> vi;
typedef vector<string> vs;
typedef pair<ll int, ll int> pii;
typedef pair<string, ll int> psi;
typedef pair<ll int, string> pis;
typedef pair<double, double> pdd;
typedef map<ll int, ll int> mii;
typedef map<ll int, bool> mib;
typedef map<string, ll int> msi;
typedef map<ll int, string> mis;
typedef set<ll int> si;
typedef set<string> ss;
typedef set<double> sd;

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define F first
#define S second
#define space ' '
#define endl "\n"

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

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"

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
#define sqr(a) ((a) * (a))
#define MOD 1000000007

const double PI = acos(-1);
const int mx = 1e9 + 7;
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int binary(int arr[], int x, int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    Boost;
    int a[] = {2, 54, 78, 89, 1, 5};

    sort(a, a + 6);

    if (binary_search(a, a + 6, 8))
        cout << "yesss";
    else
        cout << "shitt";

    return 0;
}
