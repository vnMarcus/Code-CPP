#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
struct mathang{
    int ma;
    string ten, nhom;
    float giamua, giaban;
    float loinhuan;
    void in(){
        cout << ma << " " << ten << " " << nhom << " " << fixed << setprecision(2) << loinhuan << "\n";
    }
};

typedef mathang mh;


bool cmp(mh a, mh b){
    return a.loinhuan > b.loinhuan;
}
int main (){
    int n;
    cin >> n;
    mh ds[1000];
    for (int i = 0; i < n; i ++){
        scanf("\n");
        getline(cin, ds[i].ten);
        scanf("\n");
        getline(cin, ds[i].nhom);
        cin >> ds[i].giamua >> ds[i].giaban;
        ds[i].loinhuan = ds[i].giaban - ds[i].giamua;
        ds[i].ma = i + 1;
    } 
    
    sort(ds, ds + n, cmp);
    for (int i = 0; i < n; i ++){
        ds[i].in();
    }
}