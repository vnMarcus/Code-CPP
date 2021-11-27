#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class Business{
    public:
        string name, id; int number;

        friend istream &operator >> (istream &input, Business &a){
            cin >> a.id;
            scanf("\n");
            getline(cin, a.name);
            cin >> a.number;
            return input;
        }

        friend ostream &operator << (ostream &output, Business &a){
            cout << a.id << " " << a.name << " " << a.number << endl;
            return output;
        }
};


bool cmp(Business a, Business b){
    if (a.number == b.number)   return a.id < b.id;
    return a.number > b.number;
}


int main (){    
    int n;
    cin >> n;
    Business ds[n];
    for (int i = 0; i < n; i ++){
        cin >> ds[i];
    }
    sort(ds, ds + n, cmp);
    for (int i = 0; i < n; i ++){
        cout << ds[i];
    }

}