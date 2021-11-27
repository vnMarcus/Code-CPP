#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ifstream filein("DATA1.in");
    ifstream in("DATA2.in");
    string tmp1, tmp2;
    set<string> s1, s2, s3;
    while (filein >> tmp1)
    {
        for (int i = 0; i < tmp1.size(); i++)
            tmp1[i] = tolower(tmp1[i]);
        s1.insert(tmp1);
        s3.insert(tmp1);
    }
    while (in >> tmp2)
    {
        for (int i = 0; i < tmp2.size(); i++)
            tmp2[i] = tolower(tmp2[i]);

        s2.insert(tmp2);
        s3.insert(tmp2);
    }

    filein.close();
    in.close();

    for (auto it : s3)  cout << it << " ";
    cout << endl;
    for (auto it : s1){
        if (s2.find(it) != s2.end()){
            cout << it << " ";
        }
    }
}