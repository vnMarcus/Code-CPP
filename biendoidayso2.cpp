#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        for (int i = 0; i < n; i ++){
            if (i == 0) 
                cout << a[0] * a[1] << " ";
            else if (i == n - 1)
                cout << a[n - 1] * a[n - 2] << endl;
            else cout << a[i - 1] * a[i + 1] << " ";
        }
    }




}