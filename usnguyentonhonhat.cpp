#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int a[10005];
ll n;
void Eratosthenes()
{
    memset(a, 0, sizeof(a));
    for (int i = 2; i * i <= 10000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i * i; j <= 10000; j += i)
            {
                if (a[j] == 0)
                    a[j] = i;
            }
        }
    }
    for (int i = 1; i <= 10000; i++)
        if (a[i] == 0)
            a[i] = i;
}

int main()
{
    Eratosthenes();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}