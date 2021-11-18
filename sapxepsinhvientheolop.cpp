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

bool cmp(Student a, Student b){
    if (a.className == b.className)
        return a.id < b.id;
    return a.className < b.className;
}


int main (){
    int n;
    cin >> n;
    Student ds[n];
    for(int i = 0; i < n; i ++)  cin >> ds[i];
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i ++)    cout << ds[i];

}