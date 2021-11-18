#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        vector<int> v(100002, 0);
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) {
            cin >> x;
            if (x > 0)
                v[x] = 1;
        }
        for (int i = 1; i <= 100002; i ++){
            if (v[i] == 0){
                cout << i << endl;
                break;
            }
        }
    }




}