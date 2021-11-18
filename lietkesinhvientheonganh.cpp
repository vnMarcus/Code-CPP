#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


class Student{
    public:
        string id, name, className, email;

        friend istream &operator>>(istream &input, Student &a)
        {
           
            cin >> a.id;
            cin.ignore();
            getline(cin, a.name);
            cin >> a.className >> a.email;
            return input;
        }

        friend ostream &operator << (ostream &output, Student a){
            cout << a.id << " " << a.name << " " << a.className << " " << a.email << endl;
            return output;
        }
};

int main (){
    int n;
    cin >> n;
    Student ds[n];
    for(int i = 0; i < n; i ++)  cin >> ds[i];
    int q;
    cin >> q;
    while (q --){
        string tmp;
        cin.ignore();
        getline(cin, tmp);
        for (int i = 0; i < tmp.size(); i ++){
            tmp[i] = toupper(tmp[i]);
        }
        cout << "DANH SACH SINH VIEN KHOA " << tmp << ":" << endl;
        for (int i = 0; i < n; i ++){
           
        }
    }
}