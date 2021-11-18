#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct SinhVien{
    string ma, ten;
    float diemT, diemL, diemH;
};

int main (){
    SinhVien a;
    cin >> a.ma;
    cin.ignore();
    getline(cin , a.ten);
    cin >> a.diemT >> a.diemL >> a.diemH;
    float diem = (a.diemT * 2) + a.diemL + a.diemH;
    float diemcong;
    if (a.ma[2] == '1') diemcong = 0.5f;
    else if (a.ma[2] == '2') diemcong = 1.0f;
    else if (a.ma[2] == '3')    diemcong = 2.5f;
    float diem1 = diem + diemcong;
    cout << a.ma << " " << a.ten << " " << diemcong << " " <<  diem << " ";
    if (diem1 >= 24) cout << "TRUNG TUYEN";
    else cout << "TRUOT";




}