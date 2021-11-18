#include <bits/stdc++.h>

using namespace std;

void nhap(int a[][300], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void process()
{
    int a[300][300];
    int n;
    cin >> n;
    nhap(a, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++){
            if (i % 2 == 1){
                swap(a[i][j], a[i][n - 1 - j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t --){
        process();
        cout << endl;
    }
}