#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int to_Base4(string bin)
{
    if (bin == "00")
        return 0;
    if (bin == "01")
        return 1;
    if (bin == "10")
        return 2;
    return 3;
}

string solve(string bin)
{
    int n = bin.size();
    if (n % 2 != 0)
        bin = "0" + bin;
    int odd_sum = 0, even_sum = 0;
    int ckeck = 1;
    for (int i = 0; i < bin.size(); i += 2)
    {
        if (ckeck)
        {
            odd_sum += to_Base4(bin.substr(i, 2));
        }
        else
            even_sum += to_Base4(bin.substr(i, 2));
        ckeck ^= 1;
    }
    if (abs(odd_sum - even_sum) % 5 == 0)
        return "Yes\n";
    return "No\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s);
    }
}

// #include <bits/stdc++.h>
// #define endl "\n"
// using namespace std;
// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		string a;
// 		cin>>a;
// 		int n=a.size();		
// 		int s=0;
// 		if(a[n-1]=='1') s=1;
// 		for(int i=n-2;i>=0;i--){
// 			if(a[i]=='1'){
// 				if((n-i-1)%4==1) s+=2;
// 				else if((n-i-1)%4==2) s+=4;
// 				else if((n-i-1)%4==3) s+=8;
// 				else if((n-i-1)%4==0) s+=6;
// 			}
// 		}
// 		if(s%5==0) cout<<"Yes\n";
// 		else cout<<"No\n";
// 	}
// }