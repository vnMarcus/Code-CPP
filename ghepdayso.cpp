#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, k;
        cin >> n >> k;
        vector<int> v;
        n = n * k;
        for (int i = 0; i < n; i ++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i ++){
            cout << v[i] << " ";
        }
        cout << endl;
    }




}