// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;

#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bool ok(ll a, ll b)
{
    if (b == a)
    {
        return 1;
    }
    if (b > a || a % 3 != 0)
    {
        return 0;
    }
    return ok(a / 3, b) || ok(a - a / 3, b);
}
void Boom()
{
    ll a, b;
    cin >> a >> b;
    ok(a, b) ? yes : no;
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
