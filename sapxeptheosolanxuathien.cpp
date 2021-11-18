#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct data{
    int key;
    int cnt;
};

bool cmp(data a, data b){
    if (a.cnt == b.cnt){
        return a.key < b.key;
    }
    return a.cnt > b.cnt;
}


void solve(){
    int n;
    cin >> n;
    vector<data> v;
    for (int i = 0; i < n; i ++){
        int x;
        cin >> x;
        int ckeck = 1;
        for (int j = 0; j < v.size(); j ++){
            if (v[j].key == x){
                v[j].cnt ++;
                ckeck = 0;
            }
        }
        if (ckeck){
            data b;
            b.key = x;
            b.cnt = 1;
            v.push_back(b);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i ++){
        for (int j = 0; j < v[i].cnt; j ++){
            cout << v[i].key << " ";
        }
    }
    cout << endl;

}


int main (){
    int t;
    cin >> t;
    while (t --){
        solve();
    }




}