#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		int h1 = 0, c1 = 0, cot = m - 1, hang = n - 1;
		while (h1 < hang && c1 < cot)
		{
			int pre = a[h1 + 1][c1];
			for (int i = c1; i <= cot; i++)
			{
				int cur = a[h1][i];
				a[h1][i] = pre;
				pre = cur;
			}
			h1++;
			for (int i = h1; i <= hang; i++)
			{
				int cur = a[i][cot];
				a[i][cot] = pre;
				pre = cur;
			}
			cot--;
			if (h1 <= hang)
			{
				for (int i = cot; i >= c1; i--)
				{
					int cur = a[hang][i];
					a[hang][i] = pre;
					pre = cur;
				}
				hang--;
			}
			if (c1 <= cot)
			{
				for (int i = hang; i >= h1; i--)
				{
					int cur = a[i][c1];
					a[i][c1] = pre;
					pre = cur;
				}
				c1++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << a[i][j] << " ";
			}
		}
		cout << "\n";
	}
}