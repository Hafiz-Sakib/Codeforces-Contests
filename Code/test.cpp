/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        int max_val = max(max(a, b), c);
        if (max_val > (a + k) || max_val > (b + k) || max_val > (c + k))
        {
            cout << "Case " << i << ": Fight" << endl;
        }
        else
        {
            cout << "Case " << i << ": Peaceful" << endl;
        }
    }

    return 0;
}
