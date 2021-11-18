#include <bits/stdc++.h>


using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 4];
        for (int i = 0; i < n; i ++){
            cin >> a[i];
        }

        long long int min = 10e12;
        int tmp;
        for (int i = 0; i < n - 1; i ++){
            for (int j = i + 1; j < n; j ++){
                if (abs(a[i] + a[j]) < min){
                    min = abs(a[i] + a[j]);
                    tmp = a[i] + a[j];
                }
            }
        }
        cout << tmp << endl;
    }
}