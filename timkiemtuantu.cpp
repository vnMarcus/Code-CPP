#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, x;
        cin >> n >> x;
        int a[n + 4];
        int flag = 0;
        for (int i = 0; i < n; i ++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i ++){
            if (a[i] == x){
                flag = 1;
                cout << i + 1;
                break;
            }
        }
        if (flag == 0)
            cout << -1;
        cout << endl;

    }
}