#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i ++){
            ll x;
            cin >> x;
            if (x != 0){
                cout << x << " ";
                cnt ++;
            }
        }
        for (int i = cnt; i < n; i ++)
            cout << 0 << " ";
        cout << endl;
    }




}