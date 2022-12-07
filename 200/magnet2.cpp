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

void Boom()
{
    // Let's Move
}

int main()
{
    Boost;
    int n, cnt = 0;
    cin >> n;
    string b, match = "Boom";
    while (n--)
    {
        cin >> b;
        if (b != match)
        {
            cnt++;
            match = b;
        }
    }
    cout << cnt << endl;

    return 0;
}
