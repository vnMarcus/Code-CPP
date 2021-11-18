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
        int b[100000] = {};
        for (int &x : a){
            cin >> x;
            b[x] = 1;
        }
        sort(a,a + n);
        int cnt = 0;
        int start = a[0], end = a[n - 1];
        for (int i = start; i <= end; i ++){
            if (b[i] == 0){
                cnt ++;
            }
        }
        cout << cnt << endl;
    }




}