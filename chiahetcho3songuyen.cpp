#include <bits/stdc++.h>

using namespace std;

long long LCM(long long x, long long y, long long z)
{
    long long ans = ((x * y) / (__gcd(x, y)));
    return ((z * ans) / (__gcd(ans, z)));
}


long long findDivisible(long long n, long long x, long long y, long long z)
{

    long long lcm = LCM(x, y, z);
    long long ndigitnumber = pow(10, n - 1);
    long long reminder = ndigitnumber % lcm;
    if (reminder == 0)
        return ndigitnumber;
    ndigitnumber += lcm - reminder;
    if (ndigitnumber < pow(10, n))
        return ndigitnumber;
    else
        return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long res = findDivisible(n, x, y, z);
        if (res != 0)
            cout << res;
        else
            cout << -1;
        cout << endl;
    }
}