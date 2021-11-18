#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// 2147483647 -2147483648
int ckeck(string s){
    for (int i = 0; i < s.size(); i ++){
        if (s[i] > '9' || s[i] < '0')   return 0;
    }
    return 1;
}

int main (){
    ll sum = 0;
    vector<string> v;
    ifstream filein;
    filein.open("DATA.in");
    string n;
    while (filein >> n){
        if (ckeck(n) && n.size() < 10){
            sum += stoll(n);
        }
    }
    filein.close();
   
    cout << sum;
}