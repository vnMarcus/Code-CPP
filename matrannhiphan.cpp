#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i ++){
        int tmp = 0;
        for (int j = 0; j < n; j ++){
            int x;
            cin >> x;
            if (x == 1){
                tmp ++;
            }
        }
        if (tmp > 1)   ans ++; 
    }
    cout << ans;




}