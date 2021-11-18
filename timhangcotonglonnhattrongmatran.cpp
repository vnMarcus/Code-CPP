#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    int n;
    cin >> n;
    int a[200][200];
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cin >> a[i][j];
        }
    }
    ll ans = -1e10;
    vector <int> row;
    for (int i = 0; i < n; i ++){
        ll sum = 0;
        for (int j = 0; j < n; j ++){
            sum += a[i][j];
        }
        if (sum > ans){
            ans = sum;
            row.clear();
            row.push_back(i);
        }
        else if (sum == ans){
            row.push_back(i);
        }
    }
    cout << ans << endl;
    cout << row[0];
}
