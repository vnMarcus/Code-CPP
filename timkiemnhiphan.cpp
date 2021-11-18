#include <bits/stdc++.h>
using namespace std;
int a[1000005];
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool kt = false;
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                cout << 1;
                kt = true;
                break;
            }
        }
        if (kt == false)
            cout << -1;
        cout << endl;
    }
}