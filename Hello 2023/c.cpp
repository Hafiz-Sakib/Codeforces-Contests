/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll op = 0, sum = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (ll i = m; i < n; i++)
    {
        if (v[i] < 0)
        {
            pq.push(v[i]);
        }
        sum += v[i];
        while (sum < 0)
        {
            ll x = pq.top();
            pq.pop();
            x = -1 * x;
            sum += (2 * x);
            op++;
        }
        if (v[m - 1] <= 0)
        {
            sum = v[m - 1];
            op++;
        }
        else if (m != 1)
        {
            sum = -1 * v[m - 1];
            op++;
        }
        priority_queue<ll> pp;
        for (ll i = m - 2; i >= 1; i--)
        {
            if (v[i] > 0)
            {
                pp.push(v[i]);
            }
            sum += v[i];
            while (sum > 0)
            {
                ll x = pp.top();
                pp.pop();
                x = -1 * x;
                sum += (2 * x);
                op++;
            }
        }
        cout << op << endl;
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
