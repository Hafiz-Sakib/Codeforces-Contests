// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define sz(x) (int)x.size()
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define FOR(data) for (auto it = data.begin(); it != data.end(); it++)

int main()
{
    Boost;

    vector<int> v = {2, 4, 6, 8, 20, 2, 3, 6, 4, 8};

    FOR(v)
    {
        cout << *it << " ";
    }

    cout << "\nNew Type loop : " << endl;

    fr(0, v.size())
    {
        cout << v[i] << " ";
    }

    cout << "\nNew Type loop : " << endl;

    fr(0, sz(v))
    {
        cout << v[i] << " ";
    }

    cout << "\nNew Type loop : " << endl;

    rep(i, 0, v.size())
    {
        cout << v[i] << " ";
    }

    return 0;
}
