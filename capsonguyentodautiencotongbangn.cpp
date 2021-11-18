#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int flag = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (isPrime(i) && isPrime(n - i))
            {
                cout << i << " " << n - i << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)  cout << -1 << endl;
    }
}