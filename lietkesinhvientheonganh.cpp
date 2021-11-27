#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class SinhVien
{
public:
    string id, name, Class, email;

    void nhap()
    {
        cin >> id;
        scanf("\n");
        getline(cin, name);
        cin >> Class >> email;
    }

    void in()
    {
       cout << id << " " << name << " " << Class << " " << email << "\n";
    }

    string getMajor()
    {
        string check(id, 5, 2);
        if ((check == "CN" || check == "AT") && Class[0] == 'E')
            return "";
        return check;
    }
};


int main()
{
    int n;
    cin >> n;
    SinhVien ds[1001];
    for (int i = 0; i < n; i ++){
        ds[i].nhap();
    }
    int q;
    cin >> q;
    scanf("\n");
    while (q --){
        string tmp;
        getline(cin, tmp);
        for (int i = 0;i < tmp.size(); i ++)    tmp[i] = toupper(tmp[i]);
        string tg;
		tg.push_back(tmp[0]);
		int i = 0;
		while (tmp[i] != ' ') i++;
		tg.push_back(tmp[i + 1]);
        cout << "DANH SACH SINH VIEN NGANH " << tmp << ":\n";
        for (int i = 0; i < n; i ++){
            if (tg == ds[i].getMajor())
                ds[i].in();
        }
    }
}