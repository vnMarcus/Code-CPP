#include <bits/stdc++.h>
using namespace std;


long long tinh(long long a[], long long l, long long r, long long x)
{
    long long ans = -1;
    while (l <= r)
    {
        long long m = (l + r) / 2;
        if (a[m] < x)
        {
            ans = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i ++)	cin >> a[i];
        sort(a, a + n);
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            long long index = tinh(a, i + 1, n - 1, k - a[i]);
            if (index != -1)
            {
                count += index - i;
            }
        }
        long long temp = (n * (n - 1)) / 2;
        cout << temp - count << endl;
    }
}