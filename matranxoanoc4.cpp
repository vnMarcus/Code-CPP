#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n * n];
    int b[n][n];
    for (int i = 0; i < n * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + (n * n));
    int i = 0;
    int cot = n - 1, hang = n - 1, d = 0, k = 0;
    int gt = 0;
    while (d <= n / 2)
    {
        for (i = d; i <= cot; i++)
            b[d][i] = a[gt++];
        for (i = d + 1; i <= hang; i++)
            b[i][cot] = a[gt++];
        for (i = cot - 1; i >= d; i--)
            b[hang][i] = a[gt++];
        for (i = hang - 1; i > d; i--)
            b[i][d] = a[gt++];
        d++;
        hang--;
        cot--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}