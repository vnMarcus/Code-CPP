#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct SoPhuc {
    int thuc, ao;

};
SoPhuc binh_phuong_tong(SoPhuc &A, SoPhuc &B){
    SoPhuc C;
    int tmp1 = A.thuc + B.thuc;
    int tmp2 = A.ao + B.ao;
    C.thuc = pow(tmp1, 2) - pow(tmp2, 2);
    C.ao = 2 * tmp1 * tmp2;
    return C;
}

void hien_thi(SoPhuc C){
    cout << C.thuc;
    if (C.ao > 0){
        cout << " + "
    }
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}