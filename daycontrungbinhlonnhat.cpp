#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)    cin >> x;
        ll sum = 0;
        for (int i = 0; i < k; i ++)    sum += a[i];
        ll res = sum;
        int index = 0;
        for (int i = k; i < n; i ++){
            sum = sum - a[i - k] + a[i];
            if (sum > res ){
                res = sum;
                index = i - k + 1;
            }
        }
        for (int i = index; i < index + k; i ++)
            cout << a[i] << " ";
        cout << endl;
    }




}