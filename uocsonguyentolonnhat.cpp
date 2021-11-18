#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int isPrime(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (isPrime(n / i) == 1)
            {
                cout << n / i << endl;
                return;
            }
            if (isPrime(i) == 1)
                ans = i;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}