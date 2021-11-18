#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int cnt = 0;
class NhanVien{
    public:
        string id, name, gender, ns, address,  taxNumber, contractDate;

        NhanVien(){

        }

        friend istream &operator >>(istream &input, NhanVien &a)
        {
            cnt++;
            string tmp = to_string(cnt);
            while (tmp.size() < 5)
                tmp = "0" + tmp;
            a.id = tmp;
            scanf("\n");
            getline(cin, a.name);
            cin >> a.gender >> a.ns;
             scanf("\n");
            getline(cin, a.address);
            cin >> a.taxNumber >> a.contractDate;
            if (a.ns[1] == '/')
                a.ns = "0" + a.ns;
            if (a.ns[4] == '/')
                a.ns.insert(3, "0");

            if (a.contractDate[1] == '/') a.contractDate = "0" + a.contractDate;
            if (a.contractDate[4] == '/') a.contractDate.insert(3, "0");
            
            return input;
        }

        friend ostream &operator << (ostream &output, NhanVien a){
            cout << a.id << " " << a.name << " " << a.gender << " " << a.ns << " " << a.address << " " << a.taxNumber << " " << a.contractDate << endl;
            return output;
        }

};

bool cmp(NhanVien a, NhanVien b){
    int thang1 = (a.ns[0] - '0') * 10 + (a.ns[1] - '0');
    int ngay1  = (a.ns[3] - '0') * 10 + (a.ns[4] - '0');
    int nam1 = stoi(a.ns.substr(6));


    int thang2 = (b.ns[0] - '0') * 10 + (b.ns[1] - '0');
    int ngay2  = (b.ns[3] - '0') * 10 + (b.ns[4] - '0');
    int nam2 = stoi(b.ns.substr(6));

    if (nam1 != nam2)   return nam1 < nam2;
    if (thang1 != thang2 )  return thang1 < thang2;
    return ngay1 < ngay2;
}



void sapxep(NhanVien ds[], int n){
    sort(ds, ds + n, cmp);
}


int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}