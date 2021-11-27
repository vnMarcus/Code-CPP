#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    ifstream filein("DATA.in");
    int n, m;
    filein >> n >> m;
    int a[n], b[m];
    
    set<int> s1, s2;
    for (int &x : a)  { 
         filein >> x;
         s1.insert(x);
    }
    for (int &x : b){
        filein >> x;
        s2.insert(x);
    }
    filein.close();
    for (auto it : s1){
        if (s2.find(it) != s2.end()){
            cout << it <<  " ";
        }
    }

}