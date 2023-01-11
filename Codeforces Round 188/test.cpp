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

int maxValue(int n, int index, int maxSum)
{
    if (n == 1)
    {
        return maxSum;
    }
    int right = index, left = index;
    int count = 1;
    int limitRight = n - 1;
    while (n <= maxSum && (left > 0 || right < limitRight))
    {
        n += right - left + 1;
        if (left > 0)
        {
            left--;
        }
        if (right < limitRight)
        {
            right++;
        }
        count++;
    }
    if (n < maxSum)
    {
        count += (maxSum - n) / (right - left + 1) + 1;
    }
    return count - 1;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
    }

    return 0;
}
