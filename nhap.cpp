#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int cnt1 = 0, cnt2 = 0, cnt3 = 0;
class KhachHang;
class MatHang;
class HoaDon;

class KhachHang {
    public:
        friend class HoaDon;
        string maKhachHang, name, gender, ns, address;

        friend istream &operator >> (istream &input, KhachHang &a){
            cnt1 ++;
            string tmp = to_string(cnt1);
            while (tmp.size() < 3)
                tmp = "0" + tmp;
            tmp = "KH" + tmp;
            a.maKhachHang = tmp;
            scanf("\n");
            getline(cin, a.name);
            cin >> a.gender >> a.ns;
            cin.ignore();
            getline(cin, a.address);
            if (a.ns[1] == '/')
                a.ns = "0" + a.ns;
            if (a.ns[4] == '/')
                a.ns.insert(3, "0");
            return input;
        }

        friend ostream &operator << (ostream &output, KhachHang a){
        
        }
    

};

class MatHang {
    friend class HoaDon;
    public:
        string maMatHang, name1, donvi;
        int giaMua, giaBan;

        friend istream &operator >> (istream &input, MatHang &a){
            cnt2 ++;
            string tmp = to_string(cnt2);
            while (tmp.size() < 3)
                tmp = "0" + tmp;
            tmp = "MH" + tmp;
            a.maMatHang = tmp;
            cin.ignore();
            getline(cin, a.name1);
            cin >> a.donvi >> a.giaMua >> a.giaBan;
            return input;
        }
};

class HoaDon{
    public:
        string maHoaDon, maKhachHang, maMatHang;
        int soLuong;

        friend istream &operator >> (istream &input, HoaDon &a){
            cin >> a.maKhachHang >> a.maMatHang >> a.soLuong;
            return input;
        }

        friend ostream &operator << (ostream &output, HoaDon a){
            cout << a.ma
        }

};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}