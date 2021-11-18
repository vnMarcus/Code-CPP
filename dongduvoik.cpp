#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int a[n], max_val = -1e9, min_val = 1e9;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		max_val = max(max_val, a[i]);
		min_val = min(min_val, a[i]);
	}
    vector<int> v;
    int tmp = max_val - min_val;
	for(int i = 1; i <= sqrt(tmp); i++){
		if(tmp % i == 0){
			v.emplace_back(i);
			if(i != tmp / i) v.emplace_back(tmp / i);
		}
	}
	int ans = 0;
	for(int x : v){
		int r = a[0] % x;
		int cnt = 1;
		for(int i = 1; i < n; i++){
			if(r == a[i] % x) ++cnt;
			else break;
		}
		if(cnt == n) ++ans;
	}
	cout << ans << endl;
}
int main(){
	int t;
    cin >> t;
	while(t --){
		solve();
	}
	return 0;
}

