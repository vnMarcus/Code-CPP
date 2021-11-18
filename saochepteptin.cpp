#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    ifstream filein;
    ofstream fileout;
    filein.open("DATA.in");
    fileout.open("PTIT.out");
    while (!filein.eof()){
        string name;
        getline(filein, name);
        cout << name ;
    }
    filein.close();
    fileout.close();

}