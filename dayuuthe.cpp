#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    cin.ignore();
    while (t --){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        int count = 0;
        int chan = 0, le = 0;
        while (ss >> tmp){
            count ++;
             if (tmp[tmp.length() - 1] % 2 == 0)
                chan ++;
            else
                le ++;
        }
        if ((count % 2 == 0 && chan > le) || (count % 2 != 0 && le > chan))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}