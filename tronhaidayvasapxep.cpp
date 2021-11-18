#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int a[m + n + 2];
        for (int i = 0; i < m + n; i++)
            cin >> a[i];
        sort(a, a + (m + n));
        for (int i = 0; i < m + n; i++)
            cout << a[i] << ' ';
        cout << endl;
    }
}
