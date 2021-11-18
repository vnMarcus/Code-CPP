#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        ll a, x, y;
        cin >> a >> x >> y;
        int tmp = __gcd(x, y);
        for (int i = 0; i < tmp; i ++){
            cout << a;
        }
        cout << endl;
    }




}