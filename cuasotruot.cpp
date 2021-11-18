#include <bits/stdc++.h>

using namespace std;

void scanMatrix(int a[][200], int m){
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < m;j ++){
            cin >> a[i][j];
        }
    }
}
int main (){
    int n, m;
    int a[200][200], b[200][200];
    cin >> n;
    scanMatrix(a, n);
    cin >> m;
    scanMatrix(b, m);
    int h = 0, k = 0;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cout << a[i][j] * b[h][k] << " ";
            k ++;
            if (k == m) 
                k = 0;
        }
        h ++;
        if (h == m)
            h = 0;
        cout << "\n";
    }
}