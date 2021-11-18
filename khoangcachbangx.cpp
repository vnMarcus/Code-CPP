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
        set<int> s;
        for (int &x : a){
            cin >> x;
            s.insert(x);
        }
        int flag = 0;
        for (auto it : s){
            if (s.find(it + k) != s.end()){
                cout << 1 << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)  cout << -1 << endl;
    }




}