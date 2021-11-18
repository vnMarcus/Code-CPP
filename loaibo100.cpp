#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        string s;
        cin >> s;
        ll ans = 0;
        for (int i = 0; i < s.size(); i ++){
            if (s == "")    break;
            if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0'){
                s.erase(i, 3);
                ans += 3;
                i = -1;
            }
        }
        if (ans > 0)
            cout << ans;
        cout << endl;
    }




}