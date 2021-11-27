#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define a() a

class SinhVien{
    private:
        string id, name, class1, birthday;
        float gpa;
    public:
        SinhVien(){
            id = name = class1 = birthday = "";
            gpa = 0;
        }
        friend ostream& operator<< (ostream& out, SinhVien a){
            cout << a.id << " " << a.name << " " << a.class1 << " " << a.birthday << " " 
            << fixed << setprecision(2) << a.gpa;
            return out;
        }
        friend istream& operator>> (istream& in, SinhVien &a){
            a.id = "B20DCCN001";
            getline(cin, a.name);
            cin >> a.class1 >> a.birthday >> a.gpa;
            if (a.birthday[1] == '/')  a.birthday = "0" + a.birthday;
            if (a.birthday[4] == '/') a.birthday.insert(3, "0");
            return in;
        }
};


int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}