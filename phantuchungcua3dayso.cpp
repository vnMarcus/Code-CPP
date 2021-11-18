#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for (int &x : a)    cin >> x;
        for (int &x : b)    cin >> x;
        for (int &x : c)    cin >> x;
        vector<int> res;
        int i = 0, j = 0, l = 0;
        while (i < n && j < m && l < k)
        {
            if (a[i] == b[j] && b[j] == c[l])
            {
                res.push_back(a[i]);
                ++i;
                ++j;
                ++l;
            }
            else if (a[i] <= b[j] && a[i] <= c[l])
            {
                ++i;
            }
            else if (b[j] <= a[i] && b[j] <= c[l])
            {
                ++j;
            }
            else
                ++l;
        }
        if (res.size() == 0)
            cout << "-1\n";
        else
        {
            for (int x : res)
                cout << x << " ";
            cout << endl;
        }
    }




}