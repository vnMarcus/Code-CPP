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
        for (int &x : a)  cin >> x;
        sort(a, a + n);
        int min = 1e6;
        for (int i = 0; i < n - 1; i ++){
            int tmp = a[i + 1] - a[i];
            if (tmp < min){
                min = tmp;
            }
        }
        cout << min << endl;
    }




}