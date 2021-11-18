#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int thuannghich(string s){
    int len = s.size();
    if (len == 1)
        return 0;
    for (int i = 0; i < len / 2; i ++){
        if (s[i] != s[len - i - 1])
            return 0;
    }
    return 1;
}

bool cmp(string a, string b){
    if (a.size() != b.size()){
        return a.size() > b.size();
    }
    return a > b;
}

int main (){
    vector<string> v;
    map<string, int> mp;
    string s;
    while(cin >> s){
        if (thuannghich(s)){
            v.push_back(s);
            mp[s] ++;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i ++){
        if (mp[v[i]] != 0){
            cout << v[i] << " " << mp[v[i]] << "\n";
            mp[v[i]] = 0;
        }
    }
}