#include<bits/stdc++.h> 
using namespace std; 

int c_min = INT_MAX; //Gia tri nho nhat cua ma tran chi phi
int MIN = INT_MAX; //Gia tri chi phi can thiet nho nhat
int c[100][100], n; //Ma tran ve chi phi
int x[10000]; //Mang danh dau hoan vi
int check[10000]; //Mang danh dau da di qua thanh pho i hay chua
int g = 0; // Gia tri can duoi
void Branch_And_Bound(int k){
	for(int i = 1; i <= n; i++){
		if(check[i] == 1){
			x[k] = i;
			check[i] = 0;
			g += c[x[k-1]][x[k]];
			if(k == n){
				if(g + c[x[k]][x[1]] < MIN) {
					MIN = g + c[x[k]][x[1]];
				}
			} else if(g + (n - k + 1) * c_min < MIN){
				Branch_And_Bound(k+1);
			}
			check[i] = 1;
			g -= c[x[k-1]][x[k]];
		}
	}
}
void nhap(){
	cin >> n;
	for(int i= 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> c[i][j];
		}
	}
}
main(){
	memset(check,1,sizeof(check));
	nhap();
	for(int i = 1; i <= n; i++){
		x[1] = i;
		check[i] = 0;
		Branch_And_Bound(2);
		check[i] = 1;
	}
	cout << " Nhap chi phi MIN: " << MIN;
}