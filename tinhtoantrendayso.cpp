#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = (int)1e9 + 7;

ll findhx(int a[], int n)
{
    ll res = 1;
    for (int i = 0; i < n; i++)
    {
        res *= a[i];
        res %= MOD;
    }
    return res;
}

ll gcd(int a[], int n)
{
    int tmp = a[0];
    for (int i = 1; i < n; i++)
    {
        tmp = __gcd(a[i], tmp);
    }
    return tmp;
}

ll powMod(ll a, ll b, ll m)
{
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[2000];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int g = gcd(a, n);
        ll h = findhx(a, n);
        cout << powMod(h, g, MOD) << endl;
    }
}