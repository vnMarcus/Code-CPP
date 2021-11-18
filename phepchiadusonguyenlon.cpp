#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){
    string s;
    cin >> s;
    ll m;
    cin >> m;
    ll r = 0;
    for (char x : s){
        r = r * 10 + (x - '0');
        r %= m;
    }
    cout << r  << endl;
}
int main (){
    int t;
    cin >> t;
    while (t --){
        solve();
    }
}