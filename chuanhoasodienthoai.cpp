#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    cin.ignore();
    while(t --){
        string s;    
        getline(cin, s);
        vector<char> v;
        for (int i = 0; i < s.size(); i ++){
            if (s[i] >= '0' && s[i] <= '9')
                v.push_back(s[i]);
        }
        if (v[0] == '8' && v[1] == '4'){
            cout << "0";
            for (int i = 2; i < v.size(); i ++)
                cout << v[i];
        }
        else 
            for (int i = 0; i < v.size(); i ++)
                cout << v[i];

        
        cout << endl;
    }


}