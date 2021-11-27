#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class SinhVien
{
public:
    string id, name, class1, birthday;
    float gpa;
    SinhVien(){

    };

    void xuat()
    {
        cout << this->id << " " << this->name << " " << this->class1 << " " << this->birthday << " " << fixed << setprecision(2) << this->gpa << endl;
    }
    void nhap()
    {
        this->id = "B20DCCN001";
        // cin.ignore();
        getline(cin, this->name);
        cin >> this->class1 >> this->birthday >> this->gpa;
        if (this->birthday[1] == '/')
        {
            this->birthday = "0" + this->birthday;
        }
        if (this->birthday[4] == '/')
        {
            this->birthday.insert(3, "0");
        }
    }
};

#define a() a

int main(){
    SinhVien a();
    a.nhap();
    a.xuat();
    return 0;
}