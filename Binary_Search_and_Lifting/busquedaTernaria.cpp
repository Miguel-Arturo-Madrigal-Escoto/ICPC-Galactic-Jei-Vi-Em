#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fore(i,a,b) for(int i = a, T = b; i < T; ++i)
#define sz(s) int(s.size())
#define pb push_back
#define pba pop_back
#define all(s) begin(s),end(s)
#define ENDL '\n'

using namespace std;

///types
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;


lli find(vector<lli>& v){//buscando mínimo
    lli l = 0, r = v.size() - 1;
    while(r - l > 2){
        lli m1 = l +(r - l) /3;
        lli m2 = r - (r - l) / 3;
        if(v[m1] < v[m2]) r = m2;
        else l = m1;
    }
    lli ans = INF;
    for(lli i = l; i <= r; i++) ans = min(ans, v[i]);
    return ans;
}


int main(){
	
	return 0;
}
