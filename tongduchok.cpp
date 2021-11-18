#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % k == 0)
            {
                continue;
            }
            ans += i % k;
        }
        if (ans == k)
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
}