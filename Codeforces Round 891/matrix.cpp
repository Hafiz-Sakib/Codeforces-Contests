#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<ll>>

const int mod = 1e9 + 7;

ll n, m, k;

void fillmat(vector<vector<ll>> &v)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            v[i].push_back(1);
}

vvi mul_mat(vvi &a, vvi &b)
{
    vvi ans(m);
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < m; col++)
        {
            ll var = 0;
            for (int i = 0; i < m; i++)
            {
                var += ((a[row][i] % mod) * (b[i][col] % mod)) % mod;
                var %= mod;
            }
            ans[row].push_back(var);
        }
    }
    return ans;
}
vvi identity()
{
    vvi I(m);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
        {
            if (i == j)
                I[i].push_back(1);
            else
                I[i].push_back(0);
        }
    return I;
}
vvi binpow(vvi &a, ll b)
{
    vvi res = identity();
    while (b > 0)
    {
        if (b & 1)
            res = mul_mat(res, a);
        a = mul_mat(a, a);
        b >>= 1;
    }
    return res;
}

int main()
{

    cin >> n >> m >> k;
    vector<vector<ll>> a(m);
    fillmat(a);
    for (int i = 1; i <= k; i++)
    {
        string s;
        cin >> s;
        int x = s[0] - 65;
        x > 25 ? x -= 32 : x += 26;
        int y = s[1] - 65;
        y > 25 ? y -= 32 : y += 26;
        a[x][y] = 0;
    } // for(int i=0;i<m;i++){for(int j=0;j<m;j++)cout<<a[i][j]<<" ";cout<<endl;}

    vvi b = binpow(a, n - 1);
    vector<ll> v(m, 1);
    vector<ll> ans;

    ll val = 0;
    for (int j = 0; j < m; j++)
    {
        val = 0;
        for (int z = 0; z < m; z++)
            val += v[z] * b[z][j];
        ans.push_back(val);
    }

    ll count = 0;
    for (auto i : ans)
    {
        count += (i % mod);
    }
    count %= mod;
    cout << count << endl;
}
