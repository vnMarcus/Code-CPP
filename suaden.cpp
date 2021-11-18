#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){
    int n, k , b;
    cin >> n >> k >> b;
    int a[n + 2];
    for (int i = 0; i <= n; i ++){
        a[i] = 0;
    }
    for (int i = 0; i < b; i ++){
        int x;
        cin >> x;
        a[x] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= k; i ++){
        if (a[i] == 0)  ++cnt;
    }
    int ans = cnt;
    for (int i = k + 1; i <= n; i ++){
        if (a[i - k] == 0)  --cnt;
        if (a[i] == 0) ++cnt;
        ans = max(ans, cnt);
    }
    cout << k - ans << "\n";


}

int main (){
    solve();
}