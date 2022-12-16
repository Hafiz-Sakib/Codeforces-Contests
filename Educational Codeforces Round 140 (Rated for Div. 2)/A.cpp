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

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

void Boom()
{
    ll x1, x2, y1, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((x1 > x2 && x1 < x3) || (x1 > x3 && x1 < x2) || (x2 > x1 && x2 < x3) || (x2 > x3 && x1 < x2) || (x1 < x3 && x3 < x2) || (x2 < x3 && x3 < x1) || (y1 > y2 && y1 < y3) || (y1 > y3 && y1 < y2) || (y1 < y2 && y2 < y3) || (y3 < y2 && y1 > y2) || (y1 < y3 && y3 < y2) || (y3 > y2 && y3 > y1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
