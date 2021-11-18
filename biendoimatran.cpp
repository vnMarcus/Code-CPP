#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int sumRow[n], sumCol[n];

        memset(sumRow, 0, sizeof(sumRow));
        memset(sumCol, 0, sizeof(sumCol));

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
            {
                sumRow[i] += a[i][j];
                sumCol[j] += a[i][j];
            }

        int maxSum = 0;
        for (int i = 0; i < n; ++i)
        {
            maxSum = max(maxSum, sumRow[i]);
            maxSum = max(maxSum, sumCol[i]);
        }

        int count = 0;
        int i = 0, j = 0;
        while (i < n && j < n)
        {
            int tmp = min(maxSum - sumRow[i], maxSum - sumCol[j]);
            a[i][j] += tmp;
            sumRow[i] += tmp;
            sumCol[j] += tmp;
            count += tmp;
            
            if (sumRow[i] == maxSum)
                i++;
            if (sumCol[j] == maxSum)
                j++;
        }
        cout << count << "\n";
    }
}