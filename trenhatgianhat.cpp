#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

struct person
{
    string name, ns;
};

bool cmp(person a, person b)
{
    string first = a.ns, second = b.ns;
    int ngay1 = (first[0] - '0') * 10 + (first[1] - '0');
    int ngay2 = (second[0] - '0') * 10 + (second[1] - '0');
    int thang1 = (first[3] - '0') * 10 + (first[4] - '0');
    int thang2 = (second[3] - '0') * 10 + (second[4] - '0');
    int nam1 = stoi(first.substr(6));
    int nam2 = stoi(second.substr(6));

    if (nam1 != nam2)
        return nam1 > nam2;
    if (thang1 != thang2)
        return thang1 > thang2;
    return ngay1 > ngay2;
}

void nhap(person &p)
{
    cin >> p.name;
    cin >> p.ns;
    if (p.ns[1] == '/')
    {
        p.ns = "0" + p.ns;
    }
    if (p.ns[4] == '/')
    {
        p.ns.insert(3, "0");
    }
}

int main()
{
    person ds[200];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sort(ds, ds + n, cmp);
    cout << ds[0].name << "\n"
         << ds[n - 1].name;
}