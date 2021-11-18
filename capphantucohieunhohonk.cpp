#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        ll count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int it = lower_bound(a, a + n, a[i] + k) - a;
            count += 1LL*(it - i - 1);
        }
        cout << count << endl;
    }
}