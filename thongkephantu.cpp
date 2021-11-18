#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    int x;
    map <int, int> mp;
    vector<int> v;
    while (cin >> x){
        v.push_back(x);
    }
    for (int x : v){
        mp[x] ++;
    }
    for (int i = 0; i < v.size(); i ++){
        if (mp[v[i]] != 0){
            cout << v[i] << " " << mp[v[i]] << endl;
            mp[v[i]] = 0;
        }
    }
    
}