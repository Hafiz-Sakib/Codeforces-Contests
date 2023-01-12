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
    string s;
    cin >> s;
    if (s.size() <= 3)
    {
        cout << s << endl;
    }
    else if (s.size() <= 6)
    {
        if (s.size() == 6)
        {
            cout << s[0] << s[1] << s[2] << "," << s[3] << s[4] << s[5];
        }
        else if (s.size() == 5)
        {
            cout << s[0] << s[1] << "," << s[2] << s[3] << s[4];
        }
        else
        {
            cout << s[0] << "," << s[1] << s[2] << s[3];
        }
    }
    else
    {
        if (s.size() == 9)
        {
            cout << s[0] << s[1] << s[2] << "," << s[3] << s[4] << s[5] << "," << s[6] << s[7] << s[8];
        }
        else if (s.size() == 8)
        {
            cout << s[0] << s[1] << "," << s[2] << s[3] << s[4] << "," << s[5] << s[6] << s[7];
        }
        else
        {
            cout << s[0] << "," << s[1] << s[2] << s[3] << "," << s[4] << s[5] << s[6];
        }
    }
}

int main()
{
    Boost;

    int t = 1;

    while (t--)
    {
        Boom();
    }

    return 0;
}
