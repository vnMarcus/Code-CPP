#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        ll res = 0;
        int a[n], b[n];
        for (int i = 0; i < n; i ++){
            cin >> a[i];
            b[i] = a[i];
        }
        for (int i = 1; i < n; i ++){
            for (int j = 0;j < i; j ++){
                if (a[i] > a[j] && b[i] < b[j] + a[i]){
                    b[i] = b[j] + a[i];
                }
            }
        }
        cout << *max_element(b, b + n) << endl;
    }
}