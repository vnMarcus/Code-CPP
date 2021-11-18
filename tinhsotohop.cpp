#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MOD = (int) 1e9 + 7;

ll C[1000][1000];
  void tinh()
  {
    for (int i = 0; i < 1000; i++)
    {
      for (int j = 0; j < 1000; j++)
      {
        if (j == 0 || j == i)
          C[i][j] = 1;
        else {
          C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
          C[i][j] %= MOD;
        }
      }
    }
  }

int main()
{
    int t;
    cin >> t;
    tinh();
    while (t --){
      int n, r;
      cin >> n >> r;
      cout << C[n][r] << endl;
    }
}
