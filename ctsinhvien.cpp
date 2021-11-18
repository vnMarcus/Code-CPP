#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


struct SinhVien{
    string msv, ten, lop, ns;
    float gpa;
    void in(){
        cout << msv << " " << ten << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa << " ";
    }
};

void nhapThongTinSV(SinhVien &a){
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.lop >> a.ns >> a.gpa;
    a.msv = "N20DCCN001";
    if (a.ns[1] == '/'){
        a.ns = "0" + a.ns;
    }
    if (a.ns[4] == '/'){
        a.ns.insert(3, "0");
    }
}

void inThongTinSV(SinhVien a){
    a.in();
}



int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}