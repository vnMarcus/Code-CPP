#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int flag = 1;
    string s;
    while (cin >> s){
        int n = s.size();
        for (int i = 0; i < n; i ++){
            s[i] = tolower(s[i]);
        }
        if (flag){
            s[0] -= 32;
            flag = 0;
        }
        if (s[n - 1] == '.' || s[n - 1] == '!' || s[n - 1] == '?'){
            s[n - 1] = '\n';
            cout << s;
            flag = 1;
        }
        else cout << s << " ";
    }




}