#include <bits/stdc++.h>
using namespace std;

string solve(string s1, string s2)
{

    int m[256] = {0};
    int ans = INT_MAX;
    int start = 0;
    int count = 0;

    for (int i = 0; i < s2.length(); i++)
    {
        if (m[s2[i]] == 0)
            count++;
        m[s2[i]]++;
    }
    int i = 0;
    int j = 0;
    while (j < s1.length())
    {
        m[s1[j]]--;
        if (m[s1[j]] == 0)
            count--;
        if (count == 0)
        {
            while (count == 0)
            {
                if (ans > j - i + 1)
                {
                    ans = min(ans, j - i + 1);
                    start = i;
                }
                m[s1[i]]++;
                if (m[s1[i]] > 0)
                    count++;
                i++;
            }
        }
        j++;
    }
    if (ans != INT_MAX)
        return s1.substr(start, ans);
    else
        return "-1";
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
       string s1, s2;
       cin >> s1 >> s2;
       cout << solve(s1, s2) << "\n";
    }
}
