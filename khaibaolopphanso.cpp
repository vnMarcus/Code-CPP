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
        friend ostream& operator << (ostream&, PhanSo);
        friend istream& operator >> (istream&, PhanSo&);
        
        void rutgon(){
            ll gcd = __gcd(this->tu, this->mau);
            this->tu /= gcd;
            this->mau /= gcd;
        }
};


ostream& operator << (ostream& out, PhanSo a){
    out << a.tu << "/" << a.mau << endl;
    return out;
}

istream& operator >> (istream& in, PhanSo& a){
    in >> a.tu >> a.mau;
    return in;
}


int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}