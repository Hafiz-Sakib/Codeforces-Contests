#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 1, b = 0;
    cin >> n;
    string s, x;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    if (n == 1)
    {
        cout << v[0];
        exit(0);
    }
    for (int j = 1; j < n; j++)
    {
        if (v[0] == v[j])
        {
            a++;
        }
        else if (v[0] != v[j])
        {
            b++;
            x = v[j];
        }
    }

    cout << ((a > b) ? v[0] : x) << endl;
    //   (a > b) ? cout << v[0] : cout << x << endl;

    return 0;
}
