#include <bits/stdc++.h>
using namespace std;
string s;
int a[1000005];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 7; i++)
        cin >> a[i];
    int sum = 1;
    while (n -= a[sum])
    {
        if (n <= 0)
            break;
        sum++;
        if (sum > 7)
            sum = 1;
    }
    cout << sum;
    return 0;
}
