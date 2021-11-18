#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        map<int, int > mp;
        for (int &x : a){
            cin >> x;
            mp[x] ++;
        } 
     
        for (int &x : b) {
            cin >> x;
            mp[x] ++;
        }

        for (auto it : mp)
            cout << it.first << " ";
        cout << endl;
        for (auto it : mp){
            if (it.second > 1)
                cout << it.first << " ";
        }
        cout << endl;

    }




}