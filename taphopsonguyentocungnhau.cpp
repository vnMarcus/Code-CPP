#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        ll s = n * (n + 1) / 2;
        ll s1 = (s + m) / 2;
        ll s2 = s - s1;
        if (s1 - s2 != m || __gcd(s1, s2) != 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}