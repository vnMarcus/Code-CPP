#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct NhanVien
{
    string ten, gt, ns, dc, mst, hd;
};

void nhap(NhanVien &a)
{
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.mst >> a.hd;
}

void in(NhanVien a)
{
    cout << "00001" << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}