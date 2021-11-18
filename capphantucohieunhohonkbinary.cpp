#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int last_pos(int a[], int l, int r, int x){
    int res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] < x){
            res = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)    cin >> x;
        ll ans = 0;
        sort(a, a + n);
        for (int i = 0; i < n - 1; i ++){
            int l = last_pos(a, i + 1, n - 1, k + a[i]);
            if (l != -1)
                ans += l - i;
        }
        cout << ans << endl;
    }
}