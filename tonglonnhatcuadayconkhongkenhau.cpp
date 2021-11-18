#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

void solve()
{
    int n;
    cin >> n;
    ll a[n], b[n];
    for (ll &x : a)    cin >> x;
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[0] + a[2];
    for (int i = 3; i < n; i ++){
        b[i] = a[i] + max(b[i - 2], b[i - 3]);
    }
    cout << max(b[n - 1], b[n - 2]) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t --){
        solve();
    }
}