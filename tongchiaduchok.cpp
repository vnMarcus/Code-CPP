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
        ll k;
        cin >> n >> k;
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += (i % k);
        }
        if (sum == k)
            cout << 1 << endl;
        else 
            cout << 0 << endl;
    }
}