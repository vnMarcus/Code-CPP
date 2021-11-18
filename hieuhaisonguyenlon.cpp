#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

void solve(string a, string b){
    cin >> a >> b; 
    if (a.size() > b.size())        swap(a, b);
    while (a.size() < b.size())     a = "0" + a;
    if(a > b) swap(a,b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    string ans = "";
    int carry = 0;
    for (int i = 0; i < a.size(); i ++){
        int sub = (b[i] - '0') - (a[i] - '0') - carry;
        if (sub < 0){
            sub = sub + 10;
            carry = 1;
        }
        else{
            carry = 0;
        }
        ans.push_back(sub + '0');
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}

int main (){
    int t;
    cin >> t;
    while (t --){
        string s1, s2;
        solve(s1, s2);
    }
}