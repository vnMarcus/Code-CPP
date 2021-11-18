#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        ll tmp, ans = -1e18;
        for (int i = 0; i < n; i ++){
            tmp = 1;
            for (int j = i; j < n; j ++){
                tmp *= a[j];
                ans = max(ans , tmp);
            }
        }
        cout << ans << endl;
    }




}