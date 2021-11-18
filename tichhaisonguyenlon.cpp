#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int ckeck(string s){
    for (char x : s){
        if (x != '0'){
            return 1;
        }
    }
    return 0;
}


string multiply(string s1, string s2)
{
    int len1 = s1.size();
    int len2 = s2.size();
    if (len1 == 0 || len2 == 0)
    {
        return "0";
    }
    vector<int> ans(len1 + len2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = s1[i] - '0';
        i_n2 = 0;

        for (int j = len2 - 1; j >= 0; j--)
        {
            int n2 = s2[j] - '0';

            int sum = n1 * n2 + ans[i_n2 + i_n1] + carry;
            carry = sum / 10;
            ans[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }
        if (carry > 0)
            ans[i_n1 + i_n2] += carry;
        i_n1++;
    }

    int i = ans.size() - 1;
    while (i >= 0 && ans[i] == 0)
        i--;
    string s = "";
    while (i >= 0)
        s += to_string(ans[i--]);
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        if ((str1.at(0) == '-' || str2.at(0) == '-') &&
            (str1.at(0) != '-' || str2.at(0) != '-'))
            cout << "-";

        if (str1.at(0) == '-')
            str1 = str1.substr(1);

        if (str2.at(0) == '-')
            str2 = str2.substr(1);
        if (ckeck(str1) && ckeck(str2)){
            cout << multiply(str1, str2) << endl;
        }
        else {
            cout << "0\n";
        }
    }
}