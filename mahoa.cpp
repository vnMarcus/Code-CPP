#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        map<char, int> mp;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
            if (mp[s[i]] != 0)
            {
                cout << s[i] << mp[s[i]] ;
                mp[s[i]] = 0;
            }
        cout << endl;
    }
}