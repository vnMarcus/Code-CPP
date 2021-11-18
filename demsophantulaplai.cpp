#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        int cnt = 0;
        for (int &x : a) {
            cin >> x;
            mp[x] ++;
            if (mp[x] == 2) cnt += 2;
            if (mp[x] > 2)  cnt ++;
        }

        cout << cnt << endl;
    }
}