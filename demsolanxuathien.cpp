#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, k;
        cin >> n >> k;
        int a[n];
        int cnt[n] = {0};
        for (int &x : a)  {
            cin >> x;
            if (x == k)
                cnt[k] ++;
        }
        if (cnt[k] > 0){
            cout << cnt[k] << endl;
        }
        else 
            cout << -1 << endl;
    }




}