#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n, x;
int a[100001];
bool cmp(int a, int b){
    return abs(a - x) < abs(b - x);
}

int main (){
    int t;
    cin >> t;
    while (t --){
        cin >> n >> x;
        for (int i = 0; i < n; i ++)    cin >> a[i];
        stable_sort(a, a + n, cmp);
        for (int i = 0; i < n; i ++){
            cout << a[i] << " ";
        }
        cout << endl;

    }




}