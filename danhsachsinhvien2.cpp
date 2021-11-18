#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct SinhVien
{
    string msv, ten, lop, ns;
    float gpa;
    void in()
    {
        cout << msv << " " << ten << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa << endl;
    }
};
typedef SinhVien sv;
string chuanhoa(string s){
    string a[1000];
    for (int i = 0; i < s.length(); i ++){
        s[i] = tolower(s[i]);
    }
    string word;
    stringstream ss(s);
    int n1 = 0;
    while( ss >> word){
        a[n1 ++] = word;
    }
    for (int i = 0; i < n1; i ++){
        a[i][0] = toupper(a[i][0]);
    }
    string res = "";
    for (int i = 0; i < n1 - 1; i ++){
        res += a[i] + " ";
    }
    res += a[n1 - 1];
    return res;
}
void nhap(sv a[], int n){
    for (int i = 0; i < n; i ++){
        cin.ignore();
        getline(cin, a[i].ten);
        a[i].ten = chuanhoa(a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
        if (a[i].ns[1] == '/'){
            a[i].ns = "0" + a[i].ns;
        }
        if (a[i].ns[4] == '/'){
            a[i].ns.insert(3, "0");
        }
        string s = to_string(i + 1);
        while (s.size() < 3){
            s = "0" + s;
        }
        a[i].msv = "B20DCCN" + s;
    }
}
void in(sv a[], int n){
    for (int i = 0; i < n; i ++){
        a[i].in();
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}