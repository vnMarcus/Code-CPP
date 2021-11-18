#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;
set<string> v;
void Try(string s)
{
    if (s.size() <= n && s.size() > 0)
    {
        v.insert(s);
    }
    else if (s.size() > n)
        return;
    Try(s + "6");
    Try(s + "8");
}
bool cmp(string a, string b){
    if (a.size() == b.size())
        return a > b;
    return a.size() > b.size();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try("");
        cout << v.size() << endl;
        vector<string> v1;
        for (auto it : v){  
            v1.push_back(it);
        }
        sort(v1.begin(), v1.end(), cmp);
        for (int i = 0; i < v1.size(); i ++)
            cout << v1[i] << " ";

        cout << endl;
    }
}