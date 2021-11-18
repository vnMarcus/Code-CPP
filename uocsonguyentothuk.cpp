#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        ll n, k;
        cin >> n >> k;
        int count = 0;
        int value = -1;
        for (int i = 2; i <= sqrt(n); i ++){
            while (n % i == 0){
                count ++;
                if (count == k){
                    value = i;
                    break;
                }
                n /= i;
            }
        }
        if (n > 1){
            count ++;
            if (count == k){
                value = n;
            }
        }
        cout << value << endl;
    }




}