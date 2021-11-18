#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
void process()
{
    int n;
    cin >> n;
    vector<string> a(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != "a")
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                    a[j] = "a";
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != "a")
            cnt++;
    cout << cnt;
}
int main()
{
    process();
    return 0;
}