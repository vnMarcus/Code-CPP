#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int height(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}

int sumU(int n)
{
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            sum += height(i);
            n /= i;
        }
    }
    if (n != 1)
        sum += height(n);
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (sumU(n) == height(n) && !isPrime(n))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}