#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ckeckFibo(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    ll fn = 0, f1 = 0, f2 = 1;
    while (fn < n)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    if (n == fn)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        for (int x : a)
            if (ckeckFibo(x))
                cout << x << " ";
        cout << endl;
    }
}