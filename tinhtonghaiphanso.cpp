#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct PhanSo {
    ll tu, mau;
};
void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p){
    ll gcd = __gcd(p.mau, p.tu);
    p.mau /= gcd;
    p.tu /= gcd;
}
void in(PhanSo &p){
    cout << p.tu << "/" << p.mau;
}
PhanSo tong(PhanSo &p, PhanSo &q){
    PhanSo t;
    t.tu = p.tu * q.mau + p.mau * q.tu;
    t.mau = p.mau * q.mau;
    rutgon(t);
    return t;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}