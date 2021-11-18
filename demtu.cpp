#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--)
    {
        string a;
        getline(cin, a);
        stringstream ss(a);
        string tmp;
        int count = 0;
        while (ss >> tmp)
        {
            count++;
        }
        cout << count << endl;
    }
}