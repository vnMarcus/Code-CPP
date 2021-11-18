#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int n, m;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == -1)
            {
                for (int k = 0; k < 8; k++)
                {
                    int i1 = i + dx[k];
                    int j1 = j + dy[k];
                    if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] != -1 && a[i1][j1] >= 0)
                    {
                        a[i1][j1] = -900;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << count << endl;
}