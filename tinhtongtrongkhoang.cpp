#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, Q;
        cin >> n >> Q;
        int a[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while (Q--)
        {
            int l, r;
            cin >> l >> r;
            int sum = 0;
            for (int i = l - 1; i < r; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }
    }
}