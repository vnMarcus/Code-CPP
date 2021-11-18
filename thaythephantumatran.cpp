#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    int n, m;
    cin >> n >> m;
    int a[200][200];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[200][200];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll sum = a[i][j];
            for (int k = 0; k < 8; k++)
            {
                int imoi = i + dx[k];
                int jmoi = j + dy[k];
                if (imoi >= 0 && imoi < n && jmoi >= 0 && jmoi < m)
                    sum += a[imoi][jmoi];
            }
            b[i][j] = sum;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}