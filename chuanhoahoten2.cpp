#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

vector<string> chuanhoa(string s){
    for (int i = 0; i < s.size(); i ++){
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    vector<string> v;
    string tmp;
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    for (int i = 0; i < v.size(); i ++){
        v[i][0] = toupper(v[i][0]);
    }
    return v;
}


void chuanhoa1(string s){
    vector<string> v1;
    v1 = chuanhoa(s);
    cout << v1[v1.size() - 1] << " ";
    for (int i = 0; i < v1.size() - 2; i ++){
        cout << v1[i] << " ";
    }
    cout << v1[v1.size() - 2];
}
void chuanhoa2(string s){
    vector<string> v1;
    v1 = chuanhoa(s);
    for (int i = 1; i < v1.size(); i ++){
        cout << v1[i] << " ";
    }
    cout << v1[0];
}
int main (){
    int t;
    cin >> t;
    while (t --){
        int n; cin >> n;
        string s;
        cin.ignore();
        getline(cin, s);
        if (n == 1)
            chuanhoa1(s);
        else 
            chuanhoa2(s);
        cout << "\n";
    }
}