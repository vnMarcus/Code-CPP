#include <bits/stdc++.h>

using namespace std;

bool ckeck(string s){
    string tmp = s;
    reverse(s.begin(), s.end());
    if (s != tmp){
        return false;
    }
    for (char x : s){
        if ((x - '0') % 2 == 1)
            return false;
    }
    return true;
}
int main (){
    int t;
    cin >> t;
    cin.ignore();
    while (t --){
        string s;
        cin >> s;
        if (ckeck(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}