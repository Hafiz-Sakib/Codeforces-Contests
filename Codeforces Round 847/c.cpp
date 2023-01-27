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

    vector<vector<int>> seq(n, vector<int>(n - 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> seq[i][j];
        }
    }
    vector<int> perm(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bool found = true;
            for (int k = 0; k < n - 1; k++)
            {
                if (seq[i][k] != seq[j][k])
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                perm[i] = seq[j][n - 2];
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << perm[i] << " ";
    }
    cout << endl;
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
