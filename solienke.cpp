#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        string s;
        cin >> s;
        int flag = 1;
        for (int i = 1; i < s.size(); i ++){
            if (abs(s[i] - s[i - 1]) != 1){
                flag = 0;
                cout << "NO\n";
                break;
            }
        }
        if (flag)   cout << "YES\n";
    }
}