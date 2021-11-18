#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = (int)1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll P[3000];
        ll sum = 0, tmp = 1;
        for (int i = 0; i < n; i++)
            cin >> P[i];
        for (int i = n - 1; i >= 0; i--)
        {
            sum += (tmp * P[i]) % MOD;
            tmp = (tmp * x) % MOD;
        }
        cout << sum % MOD << endl;
    }
}