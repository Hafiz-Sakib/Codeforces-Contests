/*

string author;
author = Lord__Voldemort;

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
    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        if (n == 2)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
