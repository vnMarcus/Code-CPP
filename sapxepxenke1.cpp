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
        for (int &x : a)    cin >> x;
        sort(a, a + n);
        for (int i = 0; i < n / 2; i ++){
            cout << a[n - i - 1] << " ";
            cout << a[i] << " ";
        }
        if (n % 2 != 0) cout << a[n / 2];
        cout << endl;
    }




}