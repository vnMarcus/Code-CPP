#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int dp1[100005];
    int dp2[100005];
    for (int i = 0; i <= 100000; i ++){
        dp2[i] = 0;
        dp1[i] = 0;
    }
    for (int &x : a){
        cin >> x;
        dp1[x] = 1;
    }
    for (int &x : b){
        cin >> x;
        dp2[x] = 1;
    }
    for (int i = 0; i < 100000; i ++){
        if (dp2[i] == 1 || dp1[i] == 1) cout << i << " ";
    }
    cout << "\n";
    for (int i = 0; i <= 100000; i ++){
        if (dp2[i] == 1 && dp1[i] == 1) cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t --){
        solve();
    }
}