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
        for (int &x :  a)   cin >> x;
        int l, r;
        cin >> l >> r;
        int flag = -1;
        for (int i = l; i < r; i ++){
            if (a[i] > a[i + 1]){
                flag = i;
                break;
            }
        }
        if (flag != -1){
            for (int i = flag; i < r; i ++){
                if (a[i] < a[i + 1]){
                    flag = -2;
                    break;
                }
            }
        }
        if (flag == -2) 
            cout << "No\n";
        else 
            cout << "Yes\n";
    }



}