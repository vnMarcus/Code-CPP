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
        int len = s.size();
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                sum += s[i] - '0';
        }
        multiset<char> se;
        for (int i = 0; i < len; i++)
            if (!(s[i] >= '0' && s[i] <= '9'))
                se.insert(s[i]);
        for (auto it : se)
            cout << it;
        cout << sum;
        cout << endl;
    }
}