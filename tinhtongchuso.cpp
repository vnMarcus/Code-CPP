#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;
void solve()
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    n = sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n > 9)
        {
            solve();
        }
        cout << n << endl;
    }
}