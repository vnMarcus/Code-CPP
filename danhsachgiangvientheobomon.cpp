#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class GiangVien
{
public:
    string name, subject, id, tmp1;
};

string solve(string word)
{
    stringstream ss(word);
    vector<string> v;
    string res;
    while (ss >> res)
    {
        v.push_back(res);
    }
    string ans = "";
    for (int i = 0; i < v.size(); i++)
    {
        v[i][0] = toupper(v[i][0]);
        ans += v[i][0];
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    GiangVien ds[100];
    for (int i = 0; i < n; i++)
    {
        string tmp = to_string(i + 1);
        while (tmp.size() < 2)
            tmp = "0" + tmp;
        ds[i].id = "GV" + tmp;
        scanf("\n");
        getline(cin, ds[i].name);
        scanf("\n");
        getline(cin, ds[i].subject);
        string word = ds[i].subject;
        ds[i].tmp1 = solve(word);
    }

    int q;
    cin >> q;
    while (q--)
    {
        string x;
        cin.ignore();
        getline(cin, x);
        cout << "DANH SACH GIANG VIEN BO MON " << solve(x) << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            if (ds[i].subject == x)
            {
                cout << ds[i].id << " " << ds[i].name << " " << ds[i].tmp1 << endl;
            }
        }
    }
}