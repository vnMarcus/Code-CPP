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
        int a[n];
        int max = -1;
        for (int &x : a)
        {
            cin >> x;
            if (x > max)
            {
                max = x;
            }
        }
        cout << max << endl;
    }
}