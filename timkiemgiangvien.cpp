#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int cnt = 0;
class GiangVien
{
public:
    string id, name, subject;

    void input()
    {
        cnt++;
        scanf("\n");
        getline(cin, name);
        scanf("\n");
        getline(cin, subject);
        string tmp = to_string(cnt);
        while (tmp.size() < 2)
            tmp = "0" + tmp;
        id = "GV" + tmp;
    }

    string solve(string s)
    {
        stringstream ss(s);
        string word;
        string ans = "";
        while (ss >> word)
        {
            ans += toupper(word[0]);
        }
        return ans;
    }

    int ckeck(string s)
    {
        string tmp = name;
        for (int i = 0; i < tmp.size(); i++)
            tmp[i] = tolower(tmp[i]);
        return tmp.find(s) != string::npos;
    }

    void ouput()
    {
        cout << id << " " << name << " " << solve(subject) << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    GiangVien ds[n];
    for (int i = 0; i < n; i++)
    {
        ds[i].input();
    }
    int q;
    cin >> q;
    scanf("\n");
    while (q--)
    {
        string tmp;
        cin >> tmp;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tmp << ":" << endl;
        for (int i = 0; i < tmp.size(); i++)
            tmp[i] = tolower(tmp[i]);
        for (int i = 0; i < n; i++)
        {
            if (ds[i].ckeck(tmp))
            {
                ds[i].ouput();
            }
        }
    }
}