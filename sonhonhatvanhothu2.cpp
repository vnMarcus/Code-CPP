#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 3];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] ++;
        }
        if (mp.size() < 2){
            cout << -1 << endl;
        }
        else {
            int cnt = 0;
            for (auto it : mp){
                cnt ++;
                cout << it.first << " ";
                if (cnt == 2)
                    break;
            }
            cout << endl;
        }
        
        // sort(a, a + n);
        // int min1 = a[0], min2 = min1;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == min1)
        //     {
        //         min2 = a[i + 1];
        //         break;
        //     }
        // }
        // if (min1 == min2)
        // {
        //     cout << -1;
        // }
        // else
        // {
        //     cout << min1 << " " << min2;
        // }
        // cout << endl;
    }
}