#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m], b[n] = {}, c[m] = {};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                {
                    b[i] = 1;
                    c[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (b[i] == 1 || c[j] == 1)
                    cout << 1 << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
    }
}