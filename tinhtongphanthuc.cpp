#include <iostream>
#include <iomanip>


using namespace std;

int main (){
    int n;
    cin >> n;
    double sum = 0, tmp;
    for (int i = 1; i <= n; i ++){
        tmp = 1.0 / i;
        sum += tmp;
    }
    cout << fixed << setprecision(4) << sum;
}