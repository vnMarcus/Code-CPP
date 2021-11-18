#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

void solve(){
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i ++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n); 

    for (int i = 0; i < n; i ++){
        if (a[i] != b[i]) {
            cout << i + 1 << " "; 
            break;
        }
    }
    for (int i = n - 1; i >= 0; i --){
        if (a[i] != b[i]){
            cout << i + 1 << "\n";
            break;
        }
    }

}


int main (){
    int t;
    cin >> t;
    while (t --){
        solve();
    } 
}