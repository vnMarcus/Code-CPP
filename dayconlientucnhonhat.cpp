#include <iostream>
using namespace std;
int Try(int a[], int n, int x)
{
    int s = 0, tmp = n + 1, l = 0, r = 0;
    while (r < n)
    {
        while (s <= x && r < n)
            s += a[r++];
        while (s > x && l < n)
        {
            if (r - l < tmp)
                tmp = r - l;
            s -= a[l++];
        }
    }
    return tmp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (Try(a, n, x) == n + 1)
            cout << -1 << endl;
        else
            cout << Try(a, n, x) << endl;
    }
}