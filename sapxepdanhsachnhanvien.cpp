#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct NhanVien
{
    string ma, ten, gt, ns, dc, mst, hd;
    void in()
    {
        cout << ma << " " << ten << " " << gt << " " << ns << " " << dc << " " << mst << " " << hd << endl;
    }
};
typedef NhanVien nv;
void nhap(nv &a)
{
    while (a.ma.size() < 6)
        a.ma += "0";
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    if (a.ns[1] == '/')
    {
        a.ns = "0" + a.ns;
    }
    if (a.ns[4] == '/')
    {
        a.ns.insert(3, "0");
    }
    scanf("\n");
    getline(cin, a.dc);
    cin >> a.mst >> a.hd;
}
void inds(nv ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ds[i].in();
    }
}
bool cmp(nv a, nv b)
{
    string first = a.ns, second = b.ns;
    int ngay1 = (first[0] - '0') * 10 + (first[1] - '0');
    int thang1 = (first[3] - '0') * 10 + (first[4] - '0');
    int nam1 = stoi(first.substr(6));
    int ngay2 = (second[0] - '0') * 10 + (second[1] - '0');
    int thang2 = (second[3] - '0') * 10 + (second[4] - '0');
    int nam2 = stoi(second.substr(6));
    if (nam1 != nam2)   return nam1 < nam2;
    if (ngay1 != ngay2)   return ngay1 < ngay2;
    return thang1 < thang2;
}
void sapxep(nv ds[], int n)
{
    for (int i = 0; i < n; i ++){
        string s = to_string(i + 1);
        while (s.size() < 5)
            s = "0" + s;
        ds[i].ma = s;
    }
    sort(ds, ds + n, cmp);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}