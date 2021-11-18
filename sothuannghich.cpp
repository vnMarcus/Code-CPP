#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int ckeck(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size() - 1 - i])
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (ckeck(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}