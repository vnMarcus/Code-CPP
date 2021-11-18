#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

set<ll> fibo;

void init(){
    ll f[93];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 92; i ++)
        f[i] = f[i - 1] + f[i - 2];
    for (int i = 0; i <= 92; i ++)
        fibo.insert(f[i]);
}
int main (){
    init();
    // for (ll x : fibo)
    //     cout << x << endl;
    int n, m;
    cin >> n >> m;
    ll a[200][200];
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            cin >> a[i][j];
        }
    }
    int ans = -1, cot;
    ll sum = 0;
    for (int i = 0; i < m; i++){
        ll tmp = 0;
        int dem = 0;
        for (int j = 0; j < n; j ++){
            if (fibo.count(a[j][i]) == 1){
                ++dem;
                tmp += a[j][i];
            }
            if (dem > ans){
                ans = dem;
                sum = tmp;
                cot = i;
            }
            else if (dem == ans){
                if (sum < tmp){
                    cot = i;
                    sum = tmp;
                }
            }
        }
        cout << cot + 1 << endl;
        for (int i = 0; i < n; i ++){
            cout << a[i][cot] << " ";
        }
    }
}
