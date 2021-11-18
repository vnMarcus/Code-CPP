#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int count(string s, int n){
    int res = 0;
    for (int i = 0; i < s.size(); i ++){
        int sum = 0;
        for (int  j = i; j < s.size(); j ++){
            sum = sum * 10 + (s[j] - '0');
            sum %= n;
            if (sum == 0){
                res ++;
            }
        }
    }
    return res;
}



int main (){
    int t;
    cin >> t;
    while (t --){
        string s;
        cin >> s;
        cout << count(s, 8) - count(s, 24) << endl;
    }





}