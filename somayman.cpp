#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ckeck(string s)
{
    int n = s.size();
    if (s[n - 1] == '6' && s[n - 2] == '8')
        return 1;
    return 0;
}

void solve()
{
    string s;
    cin >> s;
    if (ckeck(s))
        cout << 1 << endl;
    else
        cout << 0 << endl;
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