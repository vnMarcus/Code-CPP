#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        ll n, p;
        cin >> n >> p;
        int count = 0;
        for (int i = p; i <= n; i ++){
            ll tmp = i;
            while (tmp % p == 0){
                count ++;
                tmp /= p;
            }
        }
        cout << count << endl;
    }




}