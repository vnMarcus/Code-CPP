#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int a[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int dong = m, cot = n, k = 0, p = 0;
        int b[m * n];
        while (k < m * n)
        {
            for (int i = p; i < cot; i ++)               b[k ++] = a[p][i];
            for (int i = p + 1; i < dong; i ++)          b[k ++] = a[i][cot - 1];
            for (int i = cot - 2; i >= p; i --)           b[k ++] = a[dong - 1][i];
            for (int i = dong - 2; i > p; i -- )         b[k ++] = a[i][p];
            p++;
            dong --;
            cot --;
        }
        for (int i = 0; i < m * n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// #define ms(s,n) memset(s,n,sizeof(s))
// #define all(a) a.begin(),a.end()
// #define present(t, x) (t.find(x) != t.end())
// #define sz(a) int((a).size())
// #define FOR(i, a, b) for (int i = (a); i < (b); ++i)
// #define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
// #define pb push_back
// #define pf push_front
// #define fi first
// #define se second
// #define mp make_pair

// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double ld;
// typedef pair<int,int> pi;
// typedef vector<int> vi;
// typedef vector<pi> vii;

// const int MOD = (int) 1e9+7;
// const int INF = (int) 1e9+1;
// inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
// inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


// int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif
// 	int t; cin >> t;
// 	while(t--){
// 		int n, m; cin >> n >> m;
// 		int a[n][m];
// 		FOR(i, 0, n){
// 			FOR(j, 0, m) cin >> a[i][j];
// 		}
// 		vi res;
// 		int cnt = 0, h1 = 0, h2 = n-1, c1 = 0, c2 = m - 1;
// 		while(h1 <= h2 && c1 <= c2){
// 			for(int i = c1 ; i <= c2; i++){
// 				res.pb(a[h1][i]);
// 			}
// 			++h1;
// 			for(int i = h1; i <= h2; i++){
// 				res.pb(a[i][c2]);
// 			}
// 			--c2;
// 			if(h1 <= h2){
// 				for(int i = c2; i >= c1; i--){
// 					res.pb(a[h2][i]);
// 				}
// 				--h2;
// 			}
// 			if(c1 <= c2){
// 				for(int i = h2; i >= h1; i--){
// 					res.pb(a[i][c1]);
// 				}
// 				++c1;
// 			}
// 		}
// 		reverse(all(res));
// 		for(int x : res){
// 			cout << x << " ";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }
