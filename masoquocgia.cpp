#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] == '0' && num[i + 1] == '8' && num[i + 2] == '4')
            {
                num[i] = '.';
                num[i + 1] = '.';
                num[i + 2] = '.';
            }
        }
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] != '.')
                cout << num[i];
        }
        cout << "\n";
    }
}