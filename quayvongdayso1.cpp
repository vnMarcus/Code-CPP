#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, d;
        cin >> n >> d;
        int a[n];
        for (int &x : a)        cin >> x;
        for (int i = d; i < n; i ++)    cout << a[i] << " ";
        for (int i = 0; i < d; i ++)    cout << a[i] << " ";
        cout << endl;

    }




}