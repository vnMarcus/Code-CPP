#include <bits/stdc++.h>

using namespace std;

long long Count(string str)
{
    long long n = str.length();
    long long dp[n][3];
    memset(dp, 0, sizeof(dp));
    dp[0][(str[0] - '0') % 3]++;
    for (int i = 1; i < n; i++)
    {
        dp[i][(str[i] - '0') % 3]++;
        for (int j = 0; j < 3; j++)
        {
            dp[i][j] += dp[i - 1][j];
            dp[i][(j * 10 + (str[i] - '0')) % 3] += dp[i - 1][j];
        }
    }
    return dp[n - 1][0];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l;
        cin >> l;
        string str;
        cin >> str;
        cout << Count(str) << endl;
    }
}