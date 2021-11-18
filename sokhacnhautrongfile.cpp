#include <iostream>
#include <map>
#include <fstream>
using namespace std;

int main()
{
    ifstream filein("DATA.in");
    map<int, int> mp;
    int n;
    while (filein >> n)
    {

        mp[n]++;
    }
    for (auto it : mp)
        cout << it.first << " " << it.second << endl;
    filein.close();
    return 0;
}