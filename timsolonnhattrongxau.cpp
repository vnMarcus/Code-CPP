#include <bits/stdc++.h>

using namespace std;

void process(string s){
    int ans = -1e9, sum = 0;
    for (char x : s){
        if (isdigit(x)){
            sum = sum * 10 + x - '0';
        }
        else {
            ans = max(ans, sum);
            sum = 0;
        }
    }
    ans = max(ans, sum);
    cout << ans << "\n";
}
int main (){
    int t;
    cin >> t;
   
    while (t --){
        string s;
        cin >> s;
        process(s);
    }
}