#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define a() a

class NhanVien{
    private:
        string id, name, gender, birthday, address, taxNumber, contractDate;
    public:
        NhanVien(){

        }
    friend istream& operator>> (istream& in, NhanVien &a){
        a.id = "00001";
        getline(cin , a.name);
        cin >> a.gender >> a.birthday;
        cin.ignore();
        getline(cin, a.address);
        cin >> a.taxNumber >> a.contractDate;
         if (a.birthday[1] == '/')  a.birthday = "0" + a.birthday;
        if (a.birthday[4] == '/') a.birthday.insert(3, "0");
        if (a.contractDate[1] == '/')  a.contractDate = "0" + a.contractDate;
        if (a.contractDate[4] == '/') a.contractDate.insert(3, "0");
        return in;
    }
    friend ostream& operator<< (ostream& out, NhanVien a){
        
        cout << a.id << " " << a.name << " " << a.gender << " " << a.birthday << " " << a.address << " " << a.taxNumber << " " << a.contractDate;

        return out;
    }
};



int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}