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

// <vector, elemento a buscar>
lli binarySearch(const vi &v, lli x){
	lli l = 0, r = sz(v) - 1;
	while(r - l > 1){
		lli mid = (l + r)/2;
		
		// se encontró en v[mid]
		if (v[mid] == x) return mid;
		else if (v[mid] < x) l = mid;
		else r = mid;
	}
	// si esta en left
	if(v[l] == x) return l;
	if(v[r] == x) return r;
	
	// no encontrado
	return -1;
}

int main(){
	
	vi v = { 5, 2, 8, 9, 14, 0, 17 };
	lli x = 14;
	
	sort(all(v));
	
	cout << binarySearch(v, x) << ENDL;
	
	return 0;
}
