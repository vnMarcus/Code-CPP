#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '6' && s[i] != '8' && s[i] != '0')
            {
                cout << "NO\n";
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
    }
}