#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
struct SinhVien {
    int id;
    string msv, ten, lop, email, dn;
    void in(){
		cout << id << " " << msv << " " << ten << " " << lop << " " << email << " " << dn << endl;
	}
};
typedef SinhVien sv;

int main (){    
    int n;
    cin >> n;
    sv ds[1000];
    for (int i = 0; i < n; i ++){
        ds[i].id = i + 1;
        cin >> ds[i].msv;
        scanf("\n");
        getline(cin, ds[i].ten);
        cin >> ds[i].lop >> ds[i].email >> ds[i].dn;
    }
    auto cmp = [] (const sv a, const sv b){
        return a.ten < b.ten;
    };
    sort(ds, ds + n, cmp);
    int q;
    cin >> q;
    while (q --){
        string tmp;
        cin >> tmp;
        for (int i = 0; i < n; i ++){
            if (tmp == ds[i].dn){
                ds[i].in();
            }
        }
    }
}