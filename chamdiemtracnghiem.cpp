#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
void solve(string s){
    float ans = 0;
    for (int i = 0; i < 15; i ++){
        char tmp;
        cin >> tmp;
        if (tmp == s[i])
            ans ++;
    }
    cout << fixed << setprecision(2) << ans * 10 / 15 << "\n";
}

int main (){
    int t;
    cin >> t;
    while (t --){
        string de101 = "ABBADCCABDCCABD", de102 = "ACCABCDDBBCDDBB";
        int made;
        cin >> made;
        if (made == 101){
            solve(de101);
        }
        else
            solve(de102);
    }

}