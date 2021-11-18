#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct time1
{
    int x, y, z, t;
};

bool cmp(time1 a, time1 b){
    return a.t < b.t;
}

int main()
{
    int n;
    cin >> n;
    time1 ds[6000];
    for (int i = 0; i < n; i++)
    {
        cin >> ds[i].x >> ds[i].y >> ds[i].z;
        ds[i].t = ds[i].x * 60 * 60 + ds[i].y * 60 + ds[i].z;
    }
    sort(ds, ds + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ds[i].x << " " << ds[i].y << " " << ds[i].z << "\n";
    }
}
// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;
// typedef pair<int, int> pi;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<pair<int, pi>> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i].first >> v[i].second.first >> v[i].second.second;
//     }
//     sort(v.begin(), v.end(), [](const pair<int, pi> &a, const pair<int, pi> &b)
//          {
//              if (a.first != b.first)
//                  return a.first < b.first;
//              if (a.second.first != b.second.first)
//                  return a.second.first < b.second.first;
//              return a.second.second < b.second.second;
//          });
//     for (auto it : v)
//     {
//         cout << it.first << " " << it.second.first << " " << it.second.second << endl;
//     }
//     return 0;
// }