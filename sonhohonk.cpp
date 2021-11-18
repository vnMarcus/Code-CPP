#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){
    int n, k; 
    cin >> n >> k;
    int a[n];
    int d = 0;
    for (int i = 0; i < n; i ++){
        cin >> a[i];
        if (a[i] <= k)  d++;
    }
    int count = 0;
    for (int i = 0; i < d; i ++){
        if (a[i] <= k){
            ++count;
        }
    }
    int ans = count;
    for (int i = d; i < n; i ++){
        if (a[i - d] <= k)  --count;
        if (a[i] <= k)      ++count;
        ans = max(ans, count);
    }
    cout << d - ans << endl;
}


int main (){
    int t;
    cin >> t;
    while (t --){
        solve();
    }
}