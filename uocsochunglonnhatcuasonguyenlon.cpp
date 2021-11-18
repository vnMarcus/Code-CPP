#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a;
string b;

void solve(){
    cin >> a;
    cin >> b;
    ll ans = 0;
    for (int i = 0; i < b.size(); i ++){
        ans = (ans * 10 + b[i] - '0') % a;
    }
    cout << __gcd(ans, a) << endl;
}

int main (){
    int t;
    cin >> t;
    while (t --){
        solve();
    }




}  
