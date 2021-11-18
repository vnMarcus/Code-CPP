#include <bits/stdc++.h>
using namespace std;
map<string, long long int> a;
void load()
{
    long long int sum = 0;
    for (auto i = a.begin(); i != a.end(); i++)
    {
        sum += i->second * (i->second - 1);
        for (auto j = i; j != a.end(); j++)
        {
            if (i->first.size() < j->first.size())
            {
                if (j->first.find(i->first) != string::npos)
                    sum += i->second * j->second;
            }
            if (i->first.size() > j->first.size())
            {
                if (i->first.find(j->first) != string::npos)
                    sum += i->second * j->second;
            }
        }
    }
    cout << sum;
}
int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        a[s]++;
    }
    load();
}