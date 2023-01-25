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
    int a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;
    if (!a)
    {
        cout << 1 << endl;
    }
    else
    {
        ans = a + 2 * min(b, c);
        if (b < c)
        {
            swap(b, c);
        }
        b -= c;
        if (b + d > 0)
        {
            if (b + d > a)
            {
                ans += a + 1;
            }
            else
            {
                ans += b + d;
            }
        }
        cout << ans << endl;
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
