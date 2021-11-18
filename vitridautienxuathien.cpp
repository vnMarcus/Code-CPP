#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int first(int a[], int n, int x){
    int res = 0, l = 0, r = n - 1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] == x){
            res = m + 1;
            r = m - 1;
        }
        else if (a[m] < x)
            l = m + 1;
        else 
            r = m - 1;  
    }
    return res;
}


int cuoi(int a[], int n, int x){
    int res = 0, l = 0, r = n - 1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] == x){
            res = m + 1;
            l = m + 1;
        }
        else if (a[m] < x)
            l = m + 1;
        else 
            r = m - 1;  
    }
    return res;
}



int main (){
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a)    cin >> x;
    cout << first(a, n, x) << ' ' << cuoi(a, n, x);
}