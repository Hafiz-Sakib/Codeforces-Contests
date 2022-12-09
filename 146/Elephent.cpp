/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
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

    int n, ans = 0, t = 0;
    cin >> n;
    if (n >= 5)
    {
        t = n % 5;
        n = n / 5;
        ans = n + t;
    }
    if (t == 4)
    {
        t = n % 4;
        n = n / 4;
        ans = ans + t;
    }
    if (t == 3)
    {
        t = n % 5;
        n = n / 3;
        ans = ans + t;
    }
    if (t == 2)
    {
        t = n % 5;
        n = n / 2;
        ans = ans + t;
    }
    if (t == 1)
    {
        t = n % 5;
        n = n / 1;
        ans = ans + t;
    }
    cout << ans << endl;

    return 0;
}
