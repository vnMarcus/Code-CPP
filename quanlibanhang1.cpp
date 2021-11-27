#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class KhachHang;
class HoaDon;
class MatHang;

int cnt1 = 0, cnt2 = 0, cnt3 = 0;

class KhachHang{
    friend class HoaDon;
    public:
        string maKH, name, gender, ns, address;

        friend istream &operator >> (istream &input, KhachHang &a){
            cnt1 ++;
            string tmp = to_string(cnt1);
            while (tmp.size() < 3)
                tmp = "0" + tmp;
            tmp = "KH" + tmp;
            a.maKH = tmp;
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
};

class MatHang{
    friend class HoaDon;
    public:
        string maMH, tenMH, donvi;
        int giaMua, giaBan;
        
        friend istream &operator >> (istream &input, MatHang &a){
            cnt2 ++;
            string tmp = to_string(cnt2);
            while (tmp.size() < 3)
                tmp = "0" + tmp;
            tmp = "MH" + tmp;
            a.maMH = tmp;
            cin.ignore();
            getline(cin, a.tenMH);
            cin >> a.donvi >> a.giaMua >> a.giaBan;
            return input;
        }
};

class HoaDon{
    public:
        string maHoaDon, maKhachHang, maMatHang;
        int soLuong;

        friend istream &operator >> (istream &input, HoaDon &a){
            cnt3 ++;
            string tmp = to_string(cnt3);
            while (tmp.size() < 3)
                tmp = "0" + tmp;
            tmp = "HD" + tmp;
            a.maHoaDon = tmp;
            cin >> a.maKhachHang >> a.maMatHang >> a.soLuong;
            return input;
        }

        friend ostream &operator << (ostream &output, HoaDon a){
            
        }
}


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