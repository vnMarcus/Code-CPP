#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(ll n)
{
    if (n > (ll)1e12)
        cout << 0;
    else
    {
        ll sum = 1;
        for (ll i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (i * i != n)
                {
                    sum = sum + i + n / i;
                }
                else
                    sum = sum + i;
            }
        }
        if (sum == n)
            cout << 1;
        else
            cout << 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        solve(n);
        cout << endl;
    }
}