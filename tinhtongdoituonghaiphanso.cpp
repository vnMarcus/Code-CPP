#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau){
            this->tu = tu;
            this->mau = mau;
        }
        PhanSo(){
            
        }
        friend istream& operator >> (istream&, PhanSo&);
        friend ostream& operator << (ostream&, PhanSo);
        friend PhanSo operator + (PhanSo, PhanSo);
        void rutgon();
};

void PhanSo::rutgon(){
    ll gcd = __gcd(this->tu, this->mau);
    this->tu /= gcd;
    this->mau /= gcd;
}
ostream& operator << (ostream& out, PhanSo a){
    out << a.tu << "/" << a.mau;
    return out;
}

istream& operator >> (istream& in, PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}


PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo sum;
    sum.tu = a.tu * b.mau + a.mau * b.tu;
    sum.mau = a.mau * b.mau;
    sum.rutgon();
    return sum;
}





int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}