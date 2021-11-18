#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll findLCM(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = findLCM(i, ans);
        }
        cout << ans << endl;
    }
}