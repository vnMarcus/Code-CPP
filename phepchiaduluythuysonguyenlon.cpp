#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll powMod(ll a, ll b, ll m){
    ll res = 1;
    while (b){
        if (b % 2 == 1){
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}
ll du(string a, ll m){
    ll r = 0;
    for (char x : a){
        r = r * 10 + x - '0';
        r %= m;
    }
    return r;
}
int main (){
    int t;
    cin >> t;
    while (t --){
        string s;
        ll a, m;
        cin >> s >> a >> m;
        ll r = du(s, m);
        cout << powMod(r, a, m)<< endl;
    }
}