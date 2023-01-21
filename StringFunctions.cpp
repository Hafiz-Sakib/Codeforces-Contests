#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "hellolo";
    string sstr = str.substr(3, 2);
    string s = "sakib";
    size_t x = str.find(s, 0);
    if (x != string::npos)
    {
        cout << "found" << endl;
    }
    else
        cout << "Not found" << endl;
    cout << x << endl;
    cout << sstr << endl;
}