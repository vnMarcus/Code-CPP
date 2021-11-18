#include <bits/stdc++.h>
using namespace std;
vector<string> all(10);
void xx(string a, int n)
{
    char tg = '0';
    for (int i = a.size() - 1; i >= 0; i--)
    {
        all.at(n).push_back('0' + (tg + a.at(i) * n - '0' * (n + 1)) % 10);
        tg = '0' + (tg + a.at(i) * n - '0' * (n + 1)) / 10;
    }
    if (tg != '0')
        all.at(n).push_back(tg);
    reverse(all.at(n).begin(), all.at(n).end());
}
bool comp(string a, string b, int w)
{
    if (a.size() - w == b.size())
    {
        for (int i = w; i < a.size(); i++)
        {
            if (a.at(i) < b.at(i - w))
                return 0;
            if (a.at(i) > b.at(i - w))
                return 1;
        }
    }
    if (a.size() - w < b.size())
        return 0;
    return 1;
}
char sub(string &s, string b, int &w)
{
    for (int i = 9; i > 0; i--)
    {
        if (comp(s, all.at(i), w))
        {
            char tg = '0';
            for (int j = all.at(i).size() - 1; j >= 0; j--)
            {
                char c = s.at(j - all.at(i).size() + s.size());
                s.at(j - all.at(i).size() + s.size()) = (10 + c + '0' - tg - all.at(i).at(j)) % 10 + '0';
                tg = '1' - (10 + c + '0' - tg - all.at(i).at(j)) / 10;
            }

            if (tg != '0')
                s.at(w) -= tg - '0';
            while (w < s.size() && s.at(w) == '0')
                w++;
            return '0' + i;
        }
    }
    while (w < s.size() && s.at(w) == '0')
        w++;
    return '0';
}
void del(string &a)
{
    while (a.at(0) == '0' && a.size() > 1)
        a.erase(0, 1);
}
void load(string a, string b)
{
    string s, result = "";
    result.resize(a.size());
    for (int i = 1; i < 10; i++)
    {
        all.at(i).resize(0);
        xx(b, i);
    }
    int w = 0;
    for (int i = 0; i < a.size(); i++)
    {
        s.push_back(a.at(i));
        result.at(i) = sub(s, b, w);
    }

    s.push_back('0');
    del(result);
    cout << result << "\n";
}
int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        string a, b;
        cin >> a >> b;
        del(a);
        del(b);
        if (b.at(0) == '0')
            continue;
        load(a, b);
    }
}