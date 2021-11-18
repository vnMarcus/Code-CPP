#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
    cin >> n;
    ll a[n];
    for (ll &x : a)    cin >> x;
    for (int i = 0; i < n; i ++)    a[i] = a[i] * a[i];
    int flag = 0;
    for (int i = n - 1; i >= 2; i --){
        int l = 0, r = n - 1;
        while (l < r){
            if (a[l] + a[r] == a[i]){
                flag = 1;
                break;
            }
            if (a[l] + a[r] > a[i]){
                r --;
            }
            else l ++;
        }
    }
    if (!flag)
        cout << "NO\n";
    else   cout << "YES\n";
    }




}