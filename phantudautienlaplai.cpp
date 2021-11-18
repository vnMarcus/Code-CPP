#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 3];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int min = 1e9;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[i] == a[j] && j < min)
                    min = j;
            }
        }
        if (min == 1e9)
            cout << -1;
        else
            cout << a[min];
        cout << endl;
    }
}