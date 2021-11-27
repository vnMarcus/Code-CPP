#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int cnt = 0;

string chuanhoa(string s){
    string res;
    stringstream ss(s);
    string word;
    while (ss >> word){
        for (int i = 0; i < word.size(); i ++){
            word[i] = tolower(word[i]);
        }
        word[0] = toupper(word[0]);
        res += word + " ";
    }
    res.erase(res.size() - 1);
    return res;
}



class SinhVien{
    public:
        string id;
        string name;
        string className;
        string ns;
        float gpa;

        SinhVien(){
            id = "";
            name = "";
            className = "";
            gpa = 0;
            ns = "";
        }

        friend istream &operator >> (istream &input, SinhVien &a){
            cnt ++;
            string tmp = to_string(cnt);
            while (tmp.size() < 3)  tmp = "0" + tmp;
            tmp = "B20DCCN" + tmp;
            a.id = tmp;
            cin.ignore();
            getline(cin, a.name);
            cin >> a.className  >> a.ns >> a.gpa;
            a.name = chuanhoa(a.name);
            if (a.ns[1] == '/') a.ns = "0" + a.ns;
            if (a.ns[4] == '/') a.ns.insert(3, "0");
            return input;
        }
        
        friend ostream &operator << (ostream &output, SinhVien a){
            cout << a.id << " " << a.name << " " << a.className << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
            return output;
        }
};


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}