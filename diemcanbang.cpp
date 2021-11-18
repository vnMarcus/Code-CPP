#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum1 = 0, sum2 = 0;
        for (int &x : a)
        {
            cin >> x;
            sum1 += x;
        }
        bool ckeck = false;
        for (int i = 1; i < n; i++)
        {
            sum2 += a[i - 1];
            if ((sum1 - a[i]) / 2 == sum2)
            {
                cout << i + 1 << endl;
                ckeck = true;
                break;
            }
        }
        if (!ckeck)
            cout << -1 << endl;
    }
}