#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

void solve(string a, string b)
{
    if (a.length() < b.length())    swap(a, b);
    int n = a.size(), m = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    b += string(n - m, '0');
    string res = "";
    int carry = 0;
    for (int i = 0; i < n; i ++){
        int tmp = (a[i] - '0') + (b[i] - '0') + carry;
        res += (char)  (tmp % 10 + '0');
        carry = (tmp /= 10);
    }
    if (carry)  res += (char) (carry + '0');
    reverse(res.begin(), res.end());
    cout << res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        solve(s1, s2);
        cout << "\n";
    }
}