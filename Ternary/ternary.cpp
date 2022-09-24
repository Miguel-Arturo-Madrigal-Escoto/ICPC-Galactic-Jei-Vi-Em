typedef long long lli;
lli find(vector<lli>& v){//buscando mínimo
    lli l = 0, r, =v.size() - 1;
    while(r - l >2){
        lli m1 = l +(r - l) /3;
        lli m2 = r - (r - l) / 3;
        if(f(m1) < f(m2)) r = m2;
        else l = m1;
    }
    lli ans = INF;
    for(lli i = l; i <= r; i++) ans = min(ans, f(i));
    return ans;
}