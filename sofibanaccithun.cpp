#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    ll fibo[100];
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i <= 93; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << fibo[n] << endl;
    }
}