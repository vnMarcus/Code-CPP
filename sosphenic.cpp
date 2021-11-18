#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(int n)
{
    int count = 0;
    int ans = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int count = 0;
        while (n % i == 0)
        {
            n /= i;
            count++;
        }
        if (count > 1)
            return 0;
        if (count == 1)
            ans++;
    }
    if (n != 1)
        ans++;
    return ans == 3;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (solve(n))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}