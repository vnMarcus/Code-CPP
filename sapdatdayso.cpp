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
        map<ll, int> mp;
        for (ll &x : a) {
            cin >> x;
            if (x >= 0 && x <= n)    mp[x] ++;
        }
        for (int i = 0; i < n; i ++){
            if (mp[i] > 0)   cout << i << " ";
            else cout << -1 << " ";
        }
        cout << endl;
    }




}