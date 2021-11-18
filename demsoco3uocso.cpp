#include <bits/stdc++.h>

using namespace std;

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  a, count = 0;
        cin >> a;
        for (int i = sqrt(4); i <= sqrt(a); i++)
        {
            if (isPrime(i) && i * i <= a)
                count ++;
        }
        cout << count << "\n";
    }
}