#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
struct ThiSinh
{
    string name;
    int ngay, thang, nam;
    float diem1, diem2, diem3;
};

void nhap(ThiSinh &a)
{
    getline(cin, a.name);
    scanf("%d/%d/%d", &a.ngay, &a.thang, &a.nam);
    cin >> a.diem1 >> a.diem2 >> a.diem3;
}
void in(ThiSinh a)
{
    cout << a.name << " ";
    if (a.ngay < 10){
        cout << "0";
    }
    cout << a.ngay << "/";
    if (a.thang < 10)
        cout << "0";
    cout << a.thang << "/";
    cout << a.nam << " ";
    cout << fixed << setprecision(1) << (a.diem1 + a.diem2 + a.diem3) << endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}