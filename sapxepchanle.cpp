#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        int a[n], b[n + 1], j = 0;
        for (int &x : a)    cin >> x;
        sort(a, a + n);
        for(int i = 0;i < n; i +=2)     b[i]=a[j++];
		for(int i = 1;i < n; i +=2)     b[i]=a[j++];
		for(int i = 0; i < j; i ++)     cout<<b[i]<<" ";
        cout << endl;

    }




}