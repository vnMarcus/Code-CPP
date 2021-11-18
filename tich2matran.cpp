#include <bits/stdc++.h>
using namespace std;


void nhap(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void hienthi(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void process(int a[][100], int b[][100], int c[][100], int m, int n, int k)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            c[i][j] = 0;
            for (int l = 0; l < n; l++)
            {
                c[i][j] += a[i][l] * b[l][j];
            }
        }
    }
}
int main()
{
    int m, n, k;
    scanf("%d%d%d", &m, &n, &k);
    int a[100][100];
    int b[100][100];
    nhap(a, m, n);
    nhap(b, n, k);
    int c[100][100] = {0};
    process(a, b, c, m, n, k);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}