#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool cmp(string a, string b){
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        vector<string> v;
        for (int i = 0; i < n; i ++){
            string tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < n; i ++)
            cout << v[i];
        cout << endl;
    }




}