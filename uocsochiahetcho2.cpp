#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        int count = 0;
        int i;
        for ( i = 1; i <= sqrt(n); i ++){
            if (n % i == 0){
                if (i % 2 == 0){
                    count ++;
                }
                if ((n / i) % 2 == 0){
                    count ++;
                }
            }
        }
        i --;
        if (i * i == n && i % 2 == 0)
            count --;
        cout << count << endl;
    }




}