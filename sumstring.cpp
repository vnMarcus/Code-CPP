#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


string cong(string a, string b){
    if (a.length() < b.length())    swap(a, b);
    int n = a.size(), m = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    b += string(n - m, '0');
    string res = "";
    int carry = 0;
    for (int i = 0; i < n; i ++){
        int tmp = (a[i] - '0') + (b[i] - '0') + carry;
        res += (char)  (tmp % 10 + '0');
        carry = (tmp /= 10);
    }
    if (carry)  res += (char) (carry + '0');
    reverse(res.begin(), res.end());
    return res;
}

bool kt(string s, int l, int len1,int len2){
    string s1 = s.substr(l, len1);
    string s2 = s.substr(l + len1, len2);
    string s3 = cong(s1, s2);
    if (s3.length() > (s.length() - len1 - len2 - l))       return false;
    if (s3 == s.substr(l + len1 + len2, s3.length())){
        if (s.length() == l + len1 + len2 + s3.length())    return true;
        return kt(s, l + len1, len2, s3.length());
    }
    return false;

}

void solve(){
    string s; cin >> s;
    for (int i = 1; i < s.length(); i ++){
        for (int j = 1; j < s.length() - i; j ++){
            if (kt(s, 0, i, j)){
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}


int main (){
    int t;
    cin >> t;
    while (t --){
        solve();
    }



}