#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct SinhVien
{
    string masv, ten, lop;
    float diem1, diem2, diem3;
};
typedef SinhVien sv;

bool cmp(sv a, sv b){
    return a.ten < b.ten;
}
int main()
{
    sv ds[200];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ds[i].masv;
        scanf("\n");
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].diem1 >> ds[i].diem2 >> ds[i].diem3;
    }
    sort(ds, ds + n, cmp);
    for (int i = 0; i < n; i ++){
        cout << i + 1 << " " << ds[i].masv << " " << ds[i].ten << " " << ds[i].lop << " " << fixed << setprecision(1) << ds[i].diem1 << " " << ds[i].diem2 << " " << ds[i].diem3 << "\n";
    }
}