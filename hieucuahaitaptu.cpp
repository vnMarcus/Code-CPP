#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

set <string> solve(string s){
    stringstream ss(s);
    string word;
    set<string> se;
    while(ss >> word){
        se.insert(word);
    }
    return se;
}

int main (){
    int t;
    cin >> t;
    while (t --){
        string s1, s2;
        scanf("\n");
        getline(cin ,s1);
        scanf("\n");
        getline(cin ,s2);
        set<string> se1 = solve(s1);
        set<string> se2 = solve(s2);
        for (string x : se1){
            if (se2.find(x) == se2.end()){
                cout << x << " ";
            }
        }
        cout << "\n";
    }
}