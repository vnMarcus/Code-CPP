#include <bits/stdc++.h>

using namespace std;
struct Point
{
    double x, y;
}; 
void input(Point &p){
    cin >> p.x >> p.y;
}

double distance(Point p, Point q){
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}