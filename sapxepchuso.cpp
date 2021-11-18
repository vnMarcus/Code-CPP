#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s = "0123456789";


int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        string tmp;
        cin.ignore();
        getline(cin, tmp);
        map<char, int> mp;
        for (int i = 0; i < tmp.size(); i ++){
            mp[tmp[i]] ++;
        }
        for (int i = 0; i < s.size(); i ++){
            if (mp[s[i]] > 0)
                cout << s[i] << " ";
        }
        cout << endl;
    }




}