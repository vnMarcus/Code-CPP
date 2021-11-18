#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n; cin.ignore();
    vector<string> v(n);
    for (string &s : v) {
        getline(cin, s);
    }
    for (int i = 0; i < n; ++i) {
        cout << v[i] << ": ";
        int j = i;
        while (j < n && v[j] != "") j++;
        cout << j - i - 1 << endl;
        i = j;
    }
    return 0;
}