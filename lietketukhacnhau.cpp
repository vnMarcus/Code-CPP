#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    ifstream filein ("VANBAN.in");
    string s;
    set<string> a;
    while (filein >> s){
        for (int i = 0; i < s.size(); i ++) s[i] = tolower(s[i]);
        a.insert(s);
    }
    for (auto it : a){
        cout << it << endl;
    }

}