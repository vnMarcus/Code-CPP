#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t --){
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double x;
        x = sqrt((a - c) * (a - c) + (b - d) * (b - d));
        cout << fixed << setprecision(4) << x << "\n";
    }
}