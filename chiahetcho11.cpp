#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.size(); i ++){
            if (i % 2 == 0){
                sum += s[i] - '0';
            }
            else {
                sum -= s[i] - '0';
            }
        }
        if (sum % 11 ==0 )
            cout << "1\n";
        else
            cout << "0\n";
    }
}