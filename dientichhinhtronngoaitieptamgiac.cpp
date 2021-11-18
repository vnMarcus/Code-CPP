#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define PI 3.141592653589793238
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double  x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double  a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        double  b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        double  c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
        if (a + b <= c || a + c <= b || b + c <= a){
            cout << "INVALID\n";
        }
        else {
            double  S = 0.25 * sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b));
            double  R = (a * b * c) / (4 * S);
            S = PI * R * R;
            cout << fixed << setprecision(3) << S << "\n";
        }
    }
}