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
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> st;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.find(s[i]) != st.end())
        {
            flag = 1;
            break;
        }
        st.insert(s[i]);
    }
    if (flag)
    {
        cout << n - 2 << endl;
    }
    else
    {
        cout << -1 << endl;
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
