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
    ll n;
    cin >> n;
    vector<ll> forts(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> forts[i];
    }

    vector<int> ans;

    for (int i = 0; i < forts.size(); i++)
    {

        if (forts[i] == 1 || forts[i] == -1)
        {
            ans.push_back(i);
        }
    }

    int res = 0;

    if (ans.size() > 0)
    {

        for (int i = 0; i < ans.size() - 1; i++)
        {

            if ((forts[ans[i]] * forts[ans[i + 1]]) == -1)
            {
                res = max(res, abs(ans[i + 1] - ans[i]) - 1);
            }
        }
    }
    cout << res << endl;
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
