ll ans = -1e18;
vector <int> v;
for (int i = 0; i < n; i ++){
    ll sum = 0;
    for (int j = 0; j < m; j ++){
        sum += a[i][j];
    }
    if (sum > ans){
        ans  = sum;
        v.clear();
        v.push_back(i);
    }
    else if (sum == ans ){
        v.push_back(i);
    }
}