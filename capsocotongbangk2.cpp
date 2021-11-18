#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int first_pos(int a[], int l, int r, int x){
    int res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] == x){
            res = m;
            r = m - 1;
        }
        else if (x > a[m])
            l = m + 1;
        else r = m - 1;
    }
    return res;
}

int last_pos(int a[], int l, int r, int x){
    int res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] == x){
            res = m;
            l = m + 1;
        }
        else if (x > a[m])
            l = m + 1;
        else r = m - 1;
    }
    return res;
}

int main (){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)    cin >> x;
    sort(a, a + n);
    ll ans = 0;
    for (int i = 0; i < n - 1; i ++){
        int l = first_pos(a, i + 1, n - 1, k - a[i]);
        int r = last_pos(a, i + 1, n - 1, k - a[i]);
        if (l != -1){
            ans += r - l + 1;
        }
    }
    cout << ans << endl;




}