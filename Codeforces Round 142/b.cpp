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
    ll a, b, c, d, am, bm, tmp, jt;
    vector<ll> v(4);
    cin >> a >> b >> c >> d;
    bm = am = jt = a;
    while (b > 0 || c > 0 || d > 0)
    {
        if (bm > 0 && b > 0)
        {
            tmp = min(b, bm);
            bm -= tmp;
            am += tmp;
            jt += tmp;
            b -= tmp;
        }
        else if (am > 0 && c > 0)
        {
            tmp = min(c, am);
            am -= tmp;
            bm += tmp;
            jt += tmp;
            c -= tmp;
        }
        else if (am > 0 && bm > 0 && d > 0)
        {
            tmp = min(d, min(am, bm));
            jt += tmp;
            am -= tmp;
            bm -= bm;
            d -= tmp;
        }
        else
        {
            if (b != 0 || c != 0 || d != 0)
            {
                jt++;
            }
            break;
        }
    }
    cout << jt << endl;
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
