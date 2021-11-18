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
        int a[n], l[n];
        for (int i = 0; i < n; i ++){
            cin >> a[i];
            l[i] = 1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j ++){
                if (a[j] > a[i] && l[j] < l[i] + 1)         l[j] = l[i] + 1;
            }
        }
        cout << *max_element(l, l + n) << endl;
    }
}