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
        for (int i = 1; i < n; i ++){
            if (a[i - 1] == a[i] && a[i] != 0){
                a[i - 1]  *= 2;
                a[i] = 0;
            }
        }
        for (int x : a){
            if (x != 0){
                cout << x << " ";
            }
        }
        for (int x : a)
            if (x == 0)
                cout << x << " ";
        cout << endl;
    }




}