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
        return a.id < b.id;
}


int main (){
    Student ds[10000];
    int n = 0; 
    while (cin >> ds[n]) n ++;
    
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i ++)    cout << ds[i];

}