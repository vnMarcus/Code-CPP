#include <bits/stdc++.h>
using namespace std;
vector<int> a(100005, 1);
void era()
{
    a[1] = 0;
    for (long long i = 2; i * i <= 100000; i++)
    {
        if (a[i] == 1)
        {
            for (long long j = i * i; j <= 100000; j += i)
                a[j] = 0;
        }
    }
}
int main()
{
    era();
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int s = 0;
        for (int i = l; i <= r; i++)
        {
            s += a[i];
        }
        cout << s << endl;
    }
}