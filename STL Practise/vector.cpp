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

    vector<int> v;
    vector<int> v1 = {2, 4, 6, 8};
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int>::iterator i;
    vector<string>::iterator it;

    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << endl;
    }

    cout << "New :" << endl;

    for (i = v1.begin(); i != v1.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}
