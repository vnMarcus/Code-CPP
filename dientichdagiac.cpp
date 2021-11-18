#include <bits/stdc++.h> 
using namespace std; 

double polygonArea(double X[], double Y[], int n) 
{ 
    double area = 0.0; 
    int j = n - 1; 
    for (int i = 0; i < n; i++) 
    { 
        area += (X[j] + X[i]) * (Y[j] - Y[i]); 
        j = i;
    } 
    return abs(area / 2.0); 
}   
int main() 
{ 
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        double X[n], Y[n];
        for (int i = 0; i < n; i ++){
            cin >> X[i] >> Y[i];
        }
        double ans = polygonArea(X, Y, n);
        cout << fixed << setprecision(3) << ans << endl;
    }
}