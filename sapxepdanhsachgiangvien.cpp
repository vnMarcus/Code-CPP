#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


class GiangVien{
    public:
        string name, subject, id;
};

bool cmp(GiangVien a, GiangVien b){
    vector<string> v1;
    vector<string> v2;
    stringstream ss1(a.name);
    stringstream ss2(b.name);
    string tmp1, tmp2;
    while (ss1 >> tmp1){
        v1.push_back(tmp1);
    }
    while (ss2 >> tmp2){
        v2.push_back(tmp2);
    }
    if (v1[v1.size() - 1] == v2[v2.size() - 1])
        return a.id < b.id;
    return v1[v1.size() - 1] < v2[v2.size() - 1];
}

int main (){
    int n;
    cin >> n;
    GiangVien ds[100];
    for (int i = 0; i < n; i ++){
        string tmp = to_string(i + 1);
        while (tmp.size() < 2)  tmp = "0" + tmp;
        ds[i].id = "GV" + tmp;
        scanf("\n");
        getline(cin, ds[i].name);
        scanf("\n");
        getline(cin, ds[i].subject);
        string word = ds[i].subject;
        stringstream ss(word);
        vector<string> v;
        string res;
        while (ss >> res){
            v.push_back(res);
        }
        string ans = "";
        for (int i = 0; i < v.size(); i ++){
            v[i][0] = toupper(v[i][0]);
            ans += v[i][0];
        }
        ds[i].subject = ans;
    }

    sort(ds, ds + n, cmp);

    for (int i = 0; i < n; i ++){
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].subject << endl;
    }

}