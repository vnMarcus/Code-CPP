#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    long long tmp = 1, sum = 0;
    for (int i = 1; i <= n; i ++){
        tmp *= i;
        sum += tmp;
    }
    cout << sum;
}